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

// Function: FUN_00117210
// Address: 0x117210 - 0x117254
void FUN_00117210_0x117210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00117210_0x117210");
#endif

    switch (ctx->pc) {
        case 0x117220u: goto label_117220;
        case 0x11723cu: goto label_11723c;
        default: break;
    }

    ctx->pc = 0x117210u;

    // 0x117210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x117210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x117214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117218: 0xc07e00a  jal         func_1F8028
    ctx->pc = 0x117218u;
    SET_GPR_U32(ctx, 31, 0x117220u);
    ctx->pc = 0x11721Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117218u;
    // 0x11721c: 0x27a40018  addiu       $a0, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8028u, 0x117218u, 0x117220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117220u;
label_117220:
    // 0x117220: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x117220u;
    {
        const bool branch_taken_0x117220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117220) {
            ctx->pc = 0x117244u;
            goto label_117244;
        }
    }
    ctx->pc = 0x117228u;
    // 0x117228: 0x93a20018  lbu         $v0, 0x18($sp)
    ctx->pc = 0x117228u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11722c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11722Cu;
    {
        const bool branch_taken_0x11722c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11722Cu;
        // 0x117230: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11722c) {
            ctx->pc = 0x117248u;
            goto label_117248;
        }
    }
    ctx->pc = 0x117234u;
    // 0x117234: 0xc0802a6  jal         func_200A98
    ctx->pc = 0x117234u;
    SET_GPR_U32(ctx, 31, 0x11723Cu);
    ctx->pc = 0x117238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117234u;
    // 0x117238: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200A98u, 0x117234u, 0x11723Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11723Cu;
label_11723c:
    // 0x11723c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11723Cu;
    {
        const bool branch_taken_0x11723c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11723Cu;
        // 0x117240: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11723c) {
            ctx->pc = 0x117248u;
            goto label_117248;
        }
    }
    ctx->pc = 0x117244u;
label_117244:
    // 0x117244: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x117244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117248:
    // 0x117248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11724c: 0x3e00008  jr          $ra
    ctx->pc = 0x11724Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11724Cu;
        // 0x117250: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11724Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117254u;
}
