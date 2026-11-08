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

// Function: define_multiball_events
// Address: 0x226be0 - 0x226ce4
void define_multiball_events_0x226be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("define_multiball_events_0x226be0");
#endif

    switch (ctx->pc) {
        case 0x226c0cu: goto label_226c0c;
        case 0x226c24u: goto label_226c24;
        case 0x226c48u: goto label_226c48;
        case 0x226c60u: goto label_226c60;
        case 0x226c84u: goto label_226c84;
        case 0x226c9cu: goto label_226c9c;
        case 0x226cc0u: goto label_226cc0;
        case 0x226cd8u: goto label_226cd8;
        default: break;
    }

    ctx->pc = 0x226be0u;

    // 0x226be0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226be4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x226be4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x226be8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x226be8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x226bec: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x226becu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x226bf0: 0x3c070019  lui         $a3, 0x19
    ctx->pc = 0x226bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25 << 16));
    // 0x226bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226bf8: 0x2484d760  addiu       $a0, $a0, -0x28A0
    ctx->pc = 0x226bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956896));
    // 0x226bfc: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x226bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x226c00: 0x24c600a8  addiu       $a2, $a2, 0xA8
    ctx->pc = 0x226c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 168));
    // 0x226c04: 0xc064028  jal         func_1900A0
    ctx->pc = 0x226C04u;
    SET_GPR_U32(ctx, 31, 0x226C0Cu);
    ctx->pc = 0x226C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226C04u;
    // 0x226c08: 0x24e76710  addiu       $a3, $a3, 0x6710 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x226C04u, 0x226C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C0Cu;
label_226c0c:
    // 0x226c0c: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x226c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x226c10: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x226c10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x226c14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x226c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226c18: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x226c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x226c1c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x226C1Cu;
    SET_GPR_U32(ctx, 31, 0x226C24u);
    ctx->pc = 0x226C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226C1Cu;
    // 0x226c20: 0x24c6d750  addiu       $a2, $a2, -0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x226C1Cu, 0x226C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C24u;
label_226c24:
    // 0x226c24: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x226c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x226c28: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x226c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x226c2c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x226c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x226c30: 0x3c070019  lui         $a3, 0x19
    ctx->pc = 0x226c30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25 << 16));
    // 0x226c34: 0x2484d7a0  addiu       $a0, $a0, -0x2860
    ctx->pc = 0x226c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956960));
    // 0x226c38: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x226c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x226c3c: 0x24c600b8  addiu       $a2, $a2, 0xB8
    ctx->pc = 0x226c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 184));
    // 0x226c40: 0xc064028  jal         func_1900A0
    ctx->pc = 0x226C40u;
    SET_GPR_U32(ctx, 31, 0x226C48u);
    ctx->pc = 0x226C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226C40u;
    // 0x226c44: 0x24e76de0  addiu       $a3, $a3, 0x6DE0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x226C40u, 0x226C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C48u;
label_226c48:
    // 0x226c48: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x226c48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x226c4c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x226c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x226c50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x226c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226c54: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x226c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x226c58: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x226C58u;
    SET_GPR_U32(ctx, 31, 0x226C60u);
    ctx->pc = 0x226C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226C58u;
    // 0x226c5c: 0x24c6d790  addiu       $a2, $a2, -0x2870 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x226C58u, 0x226C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C60u;
label_226c60:
    // 0x226c60: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x226c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x226c64: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x226c64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x226c68: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x226c68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x226c6c: 0x3c070019  lui         $a3, 0x19
    ctx->pc = 0x226c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25 << 16));
    // 0x226c70: 0x2484d7e0  addiu       $a0, $a0, -0x2820
    ctx->pc = 0x226c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957024));
    // 0x226c74: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x226c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x226c78: 0x24c600c8  addiu       $a2, $a2, 0xC8
    ctx->pc = 0x226c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 200));
    // 0x226c7c: 0xc064028  jal         func_1900A0
    ctx->pc = 0x226C7Cu;
    SET_GPR_U32(ctx, 31, 0x226C84u);
    ctx->pc = 0x226C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226C7Cu;
    // 0x226c80: 0x24e77ed0  addiu       $a3, $a3, 0x7ED0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x226C7Cu, 0x226C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C84u;
label_226c84:
    // 0x226c84: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x226c84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x226c88: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x226c88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x226c8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x226c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226c90: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x226c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x226c94: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x226C94u;
    SET_GPR_U32(ctx, 31, 0x226C9Cu);
    ctx->pc = 0x226C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226C94u;
    // 0x226c98: 0x24c6d7d0  addiu       $a2, $a2, -0x2830 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x226C94u, 0x226C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C9Cu;
label_226c9c:
    // 0x226c9c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x226c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x226ca0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x226ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x226ca4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x226ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x226ca8: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x226ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x226cac: 0x2484d820  addiu       $a0, $a0, -0x27E0
    ctx->pc = 0x226cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957088));
    // 0x226cb0: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x226cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x226cb4: 0x24c600e0  addiu       $a2, $a2, 0xE0
    ctx->pc = 0x226cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
    // 0x226cb8: 0xc064028  jal         func_1900A0
    ctx->pc = 0x226CB8u;
    SET_GPR_U32(ctx, 31, 0x226CC0u);
    ctx->pc = 0x226CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226CB8u;
    // 0x226cbc: 0x24e78510  addiu       $a3, $a3, -0x7AF0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x226CB8u, 0x226CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226CC0u;
label_226cc0:
    // 0x226cc0: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x226cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x226cc4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x226cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x226cc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x226cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ccc: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x226cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x226cd0: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x226CD0u;
    SET_GPR_U32(ctx, 31, 0x226CD8u);
    ctx->pc = 0x226CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226CD0u;
    // 0x226cd4: 0x24c6d810  addiu       $a2, $a2, -0x27F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x226CD0u, 0x226CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226CD8u;
label_226cd8:
    // 0x226cd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x226CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CDCu;
        // 0x226ce0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226CE4u;
}
