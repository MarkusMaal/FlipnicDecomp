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

// Function: entry_001461d4
// Address: 0x1461d4 - 0x14625c
void entry_001461d4_0x1461d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001461d4_0x1461d4");
#endif

    switch (ctx->pc) {
        case 0x1461f8u: goto label_1461f8;
        case 0x14620cu: goto label_14620c;
        case 0x146220u: goto label_146220;
        case 0x146234u: goto label_146234;
        default: break;
    }

    ctx->pc = 0x1461d4u;

    // 0x1461d4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1461d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1461d8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1461d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1461dc: 0x8c4202b0  lw          $v0, 0x2B0($v0)
    ctx->pc = 0x1461dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 688)));
    // 0x1461e0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1461e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1461e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1461e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1461e8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1461e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1461ec: 0x8c4203c4  lw          $v0, 0x3C4($v0)
    ctx->pc = 0x1461ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 964)));
    // 0x1461f0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1461F0u;
    SET_GPR_U32(ctx, 31, 0x1461F8u);
    ctx->pc = 0x1461F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1461F0u;
    // 0x1461f4: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1461F0u, 0x1461F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1461F8u;
label_1461f8:
    // 0x1461f8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1461f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1461fc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1461fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x146200: 0x8c4203c8  lw          $v0, 0x3C8($v0)
    ctx->pc = 0x146200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 968)));
    // 0x146204: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x146204u;
    SET_GPR_U32(ctx, 31, 0x14620Cu);
    ctx->pc = 0x146208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146204u;
    // 0x146208: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x146204u, 0x14620Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14620Cu;
label_14620c:
    // 0x14620c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x14620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x146210: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x146210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x146214: 0x8c4203cc  lw          $v0, 0x3CC($v0)
    ctx->pc = 0x146214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 972)));
    // 0x146218: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x146218u;
    SET_GPR_U32(ctx, 31, 0x146220u);
    ctx->pc = 0x14621Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146218u;
    // 0x14621c: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x146218u, 0x146220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146220u;
label_146220:
    // 0x146220: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x146220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x146224: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x146224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x146228: 0x8c4203d0  lw          $v0, 0x3D0($v0)
    ctx->pc = 0x146228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 976)));
    // 0x14622c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x14622Cu;
    SET_GPR_U32(ctx, 31, 0x146234u);
    ctx->pc = 0x146230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14622Cu;
    // 0x146230: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x14622Cu, 0x146234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146234u;
label_146234:
    // 0x146234: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x146234u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x146238: 0x2e221388  sltiu       $v0, $s1, 0x1388
    ctx->pc = 0x146238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5000) ? 1 : 0);
    // 0x14623c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x14623Cu;
    {
        const bool branch_taken_0x14623c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14623Cu;
        // 0x146240: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14623c) {
            ctx->pc = 0x1461B8u;
            return;
        }
    }
    ctx->pc = 0x146244u;
    // 0x146244: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x146244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x146248: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x146248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14624c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14624cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146250: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x146250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146254: 0x3e00008  jr          $ra
    ctx->pc = 0x146254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146254u;
        // 0x146258: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14625Cu;
}
