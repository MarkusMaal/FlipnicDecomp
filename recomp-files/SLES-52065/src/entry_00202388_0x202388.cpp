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

// Function: entry_00202388
// Address: 0x202388 - 0x2023a8
void entry_00202388_0x202388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202388_0x202388");
#endif

    ctx->pc = 0x202388u;

    // 0x202388: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x202388u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x20238c: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x20238cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x202390: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x202390u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x202394: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x202394u;
    {
        const bool branch_taken_0x202394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202394u;
        // 0x202398: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202394) {
            ctx->pc = 0x2023A8u;
            return;
        }
    }
    ctx->pc = 0x20239Cu;
    // 0x20239c: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x20239cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x2023a0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2023A0u;
    {
        const bool branch_taken_0x2023a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2023A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2023A0u;
        // 0x2023a4: 0x2a820009  slti        $v0, $s4, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2023a0) {
            ctx->pc = 0x202350u;
            return;
        }
    }
    ctx->pc = 0x2023A8u;
}
