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

// Function: entry_00101f68
// Address: 0x101f68 - 0x101ff4
void entry_00101f68_0x101f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101f68_0x101f68");
#endif

    switch (ctx->pc) {
        case 0x101f70u: goto label_101f70;
        case 0x101f78u: goto label_101f78;
        case 0x101f80u: goto label_101f80;
        case 0x101f88u: goto label_101f88;
        case 0x101f90u: goto label_101f90;
        case 0x101f98u: goto label_101f98;
        case 0x101fa0u: goto label_101fa0;
        case 0x101fa8u: goto label_101fa8;
        case 0x101fb0u: goto label_101fb0;
        case 0x101fb8u: goto label_101fb8;
        case 0x101fc0u: goto label_101fc0;
        case 0x101fc8u: goto label_101fc8;
        case 0x101fd0u: goto label_101fd0;
        case 0x101fd8u: goto label_101fd8;
        default: break;
    }

    ctx->pc = 0x101f68u;

    // 0x101f68: 0xc0464fc  jal         func_1193F0
    ctx->pc = 0x101F68u;
    SET_GPR_U32(ctx, 31, 0x101F70u);
    ctx->pc = 0x1193F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1193F0u, 0x101F68u, 0x101F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F70u;
label_101f70:
    // 0x101f70: 0xc0485d0  jal         func_121740
    ctx->pc = 0x101F70u;
    SET_GPR_U32(ctx, 31, 0x101F78u);
    ctx->pc = 0x121740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121740u, 0x101F70u, 0x101F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F78u;
label_101f78:
    // 0x101f78: 0xc060878  jal         func_1821E0
    ctx->pc = 0x101F78u;
    SET_GPR_U32(ctx, 31, 0x101F80u);
    ctx->pc = 0x1821E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1821E0u, 0x101F78u, 0x101F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F80u;
label_101f80:
    // 0x101f80: 0xc0512c8  jal         func_144B20
    ctx->pc = 0x101F80u;
    SET_GPR_U32(ctx, 31, 0x101F88u);
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x101F80u, 0x101F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F88u;
label_101f88:
    // 0x101f88: 0xc051280  jal         func_144A00
    ctx->pc = 0x101F88u;
    SET_GPR_U32(ctx, 31, 0x101F90u);
    ctx->pc = 0x101F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F88u;
    // 0x101f8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A00u, 0x101F88u, 0x101F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F90u;
label_101f90:
    // 0x101f90: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x101F90u;
    SET_GPR_U32(ctx, 31, 0x101F98u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x101F90u, 0x101F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F98u;
label_101f98:
    // 0x101f98: 0xc049f48  jal         func_127D20
    ctx->pc = 0x101F98u;
    SET_GPR_U32(ctx, 31, 0x101FA0u);
    ctx->pc = 0x101F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F98u;
    // 0x101f9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D20u, 0x101F98u, 0x101FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FA0u;
label_101fa0:
    // 0x101fa0: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x101FA0u;
    SET_GPR_U32(ctx, 31, 0x101FA8u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x101FA0u, 0x101FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FA8u;
label_101fa8:
    // 0x101fa8: 0xc04a014  jal         func_128050
    ctx->pc = 0x101FA8u;
    SET_GPR_U32(ctx, 31, 0x101FB0u);
    ctx->pc = 0x101FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101FA8u;
    // 0x101fac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128050u, 0x101FA8u, 0x101FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FB0u;
label_101fb0:
    // 0x101fb0: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x101FB0u;
    SET_GPR_U32(ctx, 31, 0x101FB8u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x101FB0u, 0x101FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FB8u;
label_101fb8:
    // 0x101fb8: 0xc04a030  jal         func_1280C0
    ctx->pc = 0x101FB8u;
    SET_GPR_U32(ctx, 31, 0x101FC0u);
    ctx->pc = 0x101FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101FB8u;
    // 0x101fbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280C0u, 0x101FB8u, 0x101FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FC0u;
label_101fc0:
    // 0x101fc0: 0xc05fe4c  jal         func_17F930
    ctx->pc = 0x101FC0u;
    SET_GPR_U32(ctx, 31, 0x101FC8u);
    ctx->pc = 0x17F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F930u, 0x101FC0u, 0x101FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FC8u;
label_101fc8:
    // 0x101fc8: 0xc05fee8  jal         func_17FBA0
    ctx->pc = 0x101FC8u;
    SET_GPR_U32(ctx, 31, 0x101FD0u);
    ctx->pc = 0x101FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101FC8u;
    // 0x101fcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FBA0u, 0x101FC8u, 0x101FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FD0u;
label_101fd0:
    // 0x101fd0: 0xc0617f4  jal         func_185FD0
    ctx->pc = 0x101FD0u;
    SET_GPR_U32(ctx, 31, 0x101FD8u);
    ctx->pc = 0x185FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185FD0u, 0x101FD0u, 0x101FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FD8u;
label_101fd8:
    // 0x101fd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x101fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x101fdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x101fdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101fe0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x101fe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101fe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101fec: 0x3e00008  jr          $ra
    ctx->pc = 0x101FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FECu;
        // 0x101ff0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101FF4u;
}
