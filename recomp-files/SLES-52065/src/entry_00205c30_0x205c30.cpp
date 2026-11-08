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

// Function: entry_00205c30
// Address: 0x205c30 - 0x205c50
void entry_00205c30_0x205c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205c30_0x205c30");
#endif

    ctx->pc = 0x205c30u;

    // 0x205c30: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x205C30u;
    {
        const bool branch_taken_0x205c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C30u;
        // 0x205c34: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c30) {
            ctx->pc = 0x205CACu;
            return;
        }
    }
    ctx->pc = 0x205C38u;
    // 0x205c38: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x205C38u;
    {
        const bool branch_taken_0x205c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C38u;
        // 0x205c3c: 0x27a30100  addiu       $v1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c38) {
            ctx->pc = 0x205C74u;
            return;
        }
    }
    ctx->pc = 0x205C40u;
    // 0x205c40: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x205c40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x205c44: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x205C44u;
    {
        const bool branch_taken_0x205c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C44u;
        // 0x205c48: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c44) {
            ctx->pc = 0x205D28u;
            return;
        }
    }
    ctx->pc = 0x205C4Cu;
    // 0x205c4c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x205c4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->pc = 0x205c50u;
}
