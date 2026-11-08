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

// Function: entry_0017fd3c
// Address: 0x17fd3c - 0x17fddc
void entry_0017fd3c_0x17fd3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fd3c_0x17fd3c");
#endif

    switch (ctx->pc) {
        case 0x17fd5cu: goto label_17fd5c;
        case 0x17fd64u: goto label_17fd64;
        case 0x17fd74u: goto label_17fd74;
        case 0x17fd84u: goto label_17fd84;
        case 0x17fd94u: goto label_17fd94;
        case 0x17fda0u: goto label_17fda0;
        case 0x17fdb0u: goto label_17fdb0;
        case 0x17fdc0u: goto label_17fdc0;
        case 0x17fdd0u: goto label_17fdd0;
        default: break;
    }

    ctx->pc = 0x17fd3cu;

    // 0x17fd3c: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x17fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x17fd40: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x17fd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x17fd44: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x17FD44u;
    {
        const bool branch_taken_0x17fd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD44u;
        // 0x17fd48: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd44) {
            ctx->pc = 0x17FDDCu;
            return;
        }
    }
    ctx->pc = 0x17FD4Cu;
    // 0x17fd4c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x17fd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17fd50: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17fd50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17fd54: 0xc05ffac  jal         func_17FEB0
    ctx->pc = 0x17FD54u;
    SET_GPR_U32(ctx, 31, 0x17FD5Cu);
    ctx->pc = 0x17FD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD54u;
    // 0x17fd58: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FEB0u, 0x17FD54u, 0x17FD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD5Cu;
label_17fd5c:
    // 0x17fd5c: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x17FD5Cu;
    SET_GPR_U32(ctx, 31, 0x17FD64u);
    ctx->pc = 0x17FD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD5Cu;
    // 0x17fd60: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x17FD5Cu, 0x17FD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD64u;
label_17fd64:
    // 0x17fd64: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x17fd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17fd68: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17fd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x17fd6c: 0xc07d3fe  jal         func_1F4FF8
    ctx->pc = 0x17FD6Cu;
    SET_GPR_U32(ctx, 31, 0x17FD74u);
    ctx->pc = 0x17FD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD6Cu;
    // 0x17fd70: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4FF8u, 0x17FD6Cu, 0x17FD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD74u;
label_17fd74:
    // 0x17fd74: 0xc7ac0084  lwc1        $f12, 0x84($sp)
    ctx->pc = 0x17fd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17fd78: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x17fd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x17fd7c: 0xc07d428  jal         func_1F50A0
    ctx->pc = 0x17FD7Cu;
    SET_GPR_U32(ctx, 31, 0x17FD84u);
    ctx->pc = 0x17FD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD7Cu;
    // 0x17fd80: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x17FD7Cu, 0x17FD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD84u;
label_17fd84:
    // 0x17fd84: 0xc7ac0088  lwc1        $f12, 0x88($sp)
    ctx->pc = 0x17fd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17fd88: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17fd8c: 0xc07d3d4  jal         func_1F4F50
    ctx->pc = 0x17FD8Cu;
    SET_GPR_U32(ctx, 31, 0x17FD94u);
    ctx->pc = 0x17FD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD8Cu;
    // 0x17fd90: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F50u, 0x17FD8Cu, 0x17FD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD94u;
label_17fd94:
    // 0x17fd94: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x17fd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17fd98: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x17FD98u;
    SET_GPR_U32(ctx, 31, 0x17FDA0u);
    ctx->pc = 0x17FD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD98u;
    // 0x17fd9c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x17FD98u, 0x17FDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FDA0u;
label_17fda0:
    // 0x17fda0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x17fda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17fda4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x17fda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x17fda8: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17FDA8u;
    SET_GPR_U32(ctx, 31, 0x17FDB0u);
    ctx->pc = 0x17FDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FDA8u;
    // 0x17fdac: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x17FDA8u, 0x17FDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FDB0u;
label_17fdb0:
    // 0x17fdb0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x17fdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17fdb4: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x17fdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x17fdb8: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17FDB8u;
    SET_GPR_U32(ctx, 31, 0x17FDC0u);
    ctx->pc = 0x17FDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FDB8u;
    // 0x17fdbc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x17FDB8u, 0x17FDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FDC0u;
label_17fdc0:
    // 0x17fdc0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x17fdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17fdc4: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x17fdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17fdc8: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17FDC8u;
    SET_GPR_U32(ctx, 31, 0x17FDD0u);
    ctx->pc = 0x17FDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FDC8u;
    // 0x17fdcc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x17FDC8u, 0x17FDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FDD0u;
label_17fdd0:
    // 0x17fdd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17fdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fdd4: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x17FDD4u;
    SET_GPR_U32(ctx, 31, 0x17FDDCu);
    ctx->pc = 0x17FDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FDD4u;
    // 0x17fdd8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x17FDD4u, 0x17FDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FDDCu;
}
