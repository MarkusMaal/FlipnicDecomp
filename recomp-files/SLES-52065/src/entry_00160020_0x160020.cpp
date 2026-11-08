#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00160020
// Address: 0x160020 - 0x160050
void entry_00160020_0x160020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160020_0x160020");
#endif

    ctx->pc = 0x160020u;

    // 0x160020: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x160020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x160024: 0x28c3000a  slti        $v1, $a2, 0xA
    ctx->pc = 0x160024u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x160028: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x160028u;
    {
        const bool branch_taken_0x160028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160028u;
        // 0x16002c: 0x24e703d0  addiu       $a3, $a3, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160028) {
            ctx->pc = 0x15FFECu;
            return;
        }
    }
    ctx->pc = 0x160030u;
    // 0x160030: 0x8083002c  lb          $v1, 0x2C($a0)
    ctx->pc = 0x160030u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x160034: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x160034u;
    {
        const bool branch_taken_0x160034 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x160034) {
            ctx->pc = 0x160050u;
            return;
        }
    }
    ctx->pc = 0x16003Cu;
    // 0x16003c: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x16003cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x160040: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x160040u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x160044: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x160044u;
    {
        const bool branch_taken_0x160044 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160044u;
        // 0x160048: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160044) {
            ctx->pc = 0x160050u;
            return;
        }
    }
    ctx->pc = 0x16004Cu;
    // 0x16004c: 0xa083002c  sb          $v1, 0x2C($a0)
    ctx->pc = 0x16004cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x160050u;
}
