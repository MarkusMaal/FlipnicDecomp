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

// Function: FUN_001c01f0
// Address: 0x1c01f0 - 0x1c0268
void FUN_001c01f0_0x1c01f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c01f0_0x1c01f0");
#endif

    switch (ctx->pc) {
        case 0x1c023cu: goto label_1c023c;
        case 0x1c0250u: goto label_1c0250;
        default: break;
    }

    ctx->pc = 0x1c01f0u;

    // 0x1c01f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c01f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c01f4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c01f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c01f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c01f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c01fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c01fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0200: 0x8c23f4f8  lw          $v1, -0xB08($at)
    ctx->pc = 0x1c0200u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F4F8u));
    // 0x1c0204: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C0204u;
    {
        const bool branch_taken_0x1c0204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0204u;
        // 0x1c0208: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0204) {
            ctx->pc = 0x1C025Cu;
            goto label_1c025c;
        }
    }
    ctx->pc = 0x1C020Cu;
    // 0x1c020c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c020cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0210: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C0210u;
    {
        const bool branch_taken_0x1c0210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0210u;
        // 0x1c0214: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0210) {
            ctx->pc = 0x1C0248u;
            goto label_1c0248;
        }
    }
    ctx->pc = 0x1C0218u;
    // 0x1c0218: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c0218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c021c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C021Cu;
    {
        const bool branch_taken_0x1c021c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C021Cu;
        // 0x1c0220: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c021c) {
            ctx->pc = 0x1C0234u;
            goto label_1c0234;
        }
    }
    ctx->pc = 0x1C0224u;
    // 0x1c0224: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0224u;
    {
        const bool branch_taken_0x1c0224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0224) {
            ctx->pc = 0x1C0234u;
            goto label_1c0234;
        }
    }
    ctx->pc = 0x1C022Cu;
    // 0x1c022c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C022Cu;
    {
        const bool branch_taken_0x1c022c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c022c) {
            ctx->pc = 0x1C0258u;
            goto label_1c0258;
        }
    }
    ctx->pc = 0x1C0234u;
label_1c0234:
    // 0x1c0234: 0xc07307c  jal         func_1CC1F0
    ctx->pc = 0x1C0234u;
    SET_GPR_U32(ctx, 31, 0x1C023Cu);
    ctx->pc = 0x1C0238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0234u;
    // 0x1c0238: 0x8c24f4f0  lw          $a0, -0xB10($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC1F0u, 0x1C0234u, 0x1C023Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C023Cu;
label_1c023c:
    // 0x1c023c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c023cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0240: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0240u;
    {
        const bool branch_taken_0x1c0240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0240u;
        // 0x1c0244: 0x8c22f4f0  lw          $v0, -0xB10($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0240) {
            ctx->pc = 0x1C025Cu;
            goto label_1c025c;
        }
    }
    ctx->pc = 0x1C0248u;
label_1c0248:
    // 0x1c0248: 0xc07307c  jal         func_1CC1F0
    ctx->pc = 0x1C0248u;
    SET_GPR_U32(ctx, 31, 0x1C0250u);
    ctx->pc = 0x1CC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC1F0u, 0x1C0248u, 0x1C0250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0250u;
label_1c0250:
    // 0x1c0250: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0250u;
    {
        const bool branch_taken_0x1c0250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0250u;
        // 0x1c0254: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0250) {
            ctx->pc = 0x1C025Cu;
            goto label_1c025c;
        }
    }
    ctx->pc = 0x1C0258u;
label_1c0258:
    // 0x1c0258: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c0258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c025c:
    // 0x1c025c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c025cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0260: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0260u;
        // 0x1c0264: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0268u;
}
