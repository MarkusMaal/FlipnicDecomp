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

// Function: entry_001995e8
// Address: 0x1995e8 - 0x19962c
void entry_001995e8_0x1995e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001995e8_0x1995e8");
#endif

    switch (ctx->pc) {
        case 0x1995f0u: goto label_1995f0;
        case 0x199618u: goto label_199618;
        case 0x199624u: goto label_199624;
        default: break;
    }

    ctx->pc = 0x1995e8u;

    // 0x1995e8: 0xc058018  jal         func_160060
    ctx->pc = 0x1995E8u;
    SET_GPR_U32(ctx, 31, 0x1995F0u);
    ctx->pc = 0x1995ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1995E8u;
    // 0x1995ec: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x1995E8u, 0x1995F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1995F0u;
label_1995f0:
    // 0x1995f0: 0x8e880680  lw          $t0, 0x680($s4)
    ctx->pc = 0x1995f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1664)));
    // 0x1995f4: 0x8e820684  lw          $v0, 0x684($s4)
    ctx->pc = 0x1995f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1668)));
    // 0x1995f8: 0x1502000c  bne         $t0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1995F8u;
    {
        const bool branch_taken_0x1995f8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x1995f8) {
            ctx->pc = 0x19962Cu;
            return;
        }
    }
    ctx->pc = 0x199600u;
    // 0x199600: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x199600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x199604: 0x26840820  addiu       $a0, $s4, 0x820
    ctx->pc = 0x199604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2080));
    // 0x199608: 0x240607d0  addiu       $a2, $zero, 0x7D0
    ctx->pc = 0x199608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x19960c: 0xdc452818  ld          $a1, 0x2818($v0)
    ctx->pc = 0x19960cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 10264)));
    // 0x199610: 0xc069698  jal         func_1A5A60
    ctx->pc = 0x199610u;
    SET_GPR_U32(ctx, 31, 0x199618u);
    ctx->pc = 0x199614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199610u;
    // 0x199614: 0x24077530  addiu       $a3, $zero, 0x7530 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5A60u, 0x199610u, 0x199618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199618u;
label_199618:
    // 0x199618: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x199618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19961c: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19961Cu;
    SET_GPR_U32(ctx, 31, 0x199624u);
    ctx->pc = 0x199620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19961Cu;
    // 0x199620: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19961Cu, 0x199624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199624u;
label_199624:
    // 0x199624: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x199624u;
    {
        const bool branch_taken_0x199624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199624) {
            ctx->pc = 0x19993Cu;
            return;
        }
    }
    ctx->pc = 0x19962Cu;
}
