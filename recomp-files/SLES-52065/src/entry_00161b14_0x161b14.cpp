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

// Function: entry_00161b14
// Address: 0x161b14 - 0x161b30
void entry_00161b14_0x161b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161b14_0x161b14");
#endif

    switch (ctx->pc) {
        case 0x161b28u: goto label_161b28;
        default: break;
    }

    ctx->pc = 0x161b14u;

    // 0x161b14: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x161b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x161b18: 0x14c3003a  bne         $a2, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x161B18u;
    {
        const bool branch_taken_0x161b18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x161B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B18u;
        // 0x161b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b18) {
            ctx->pc = 0x161C04u;
            return;
        }
    }
    ctx->pc = 0x161B20u;
    // 0x161b20: 0xc042118  jal         func_108460
    ctx->pc = 0x161B20u;
    SET_GPR_U32(ctx, 31, 0x161B28u);
    ctx->pc = 0x161B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161B20u;
    // 0x161b24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x161B20u, 0x161B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161B28u;
label_161b28:
    // 0x161b28: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x161B28u;
    {
        const bool branch_taken_0x161b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B28u;
        // 0x161b2c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b28) {
            ctx->pc = 0x161C08u;
            return;
        }
    }
    ctx->pc = 0x161B30u;
}
