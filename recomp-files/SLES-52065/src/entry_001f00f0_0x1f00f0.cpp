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

// Function: entry_001f00f0
// Address: 0x1f00f0 - 0x1f0188
void entry_001f00f0_0x1f00f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f00f0_0x1f00f0");
#endif

    switch (ctx->pc) {
        case 0x1f0128u: goto label_1f0128;
        case 0x1f0154u: goto label_1f0154;
        default: break;
    }

    ctx->pc = 0x1f00f0u;

    // 0x1f00f0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f00f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f00f4: 0x2442f700  addiu       $v0, $v0, -0x900
    ctx->pc = 0x1f00f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
    // 0x1f00f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f00f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f00fc: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1f00fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1f0100: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1f0100u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f0104: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1f0104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x1f0108: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1f0108u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1f010c: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x1f010cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x1f0110: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f0110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f0114: 0xae550014  sw          $s5, 0x14($s2)
    ctx->pc = 0x1f0114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 21));
    // 0x1f0118: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x1f0118u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
    // 0x1f011c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f011cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f0120: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F0120u;
    SET_GPR_U32(ctx, 31, 0x1F0128u);
    ctx->pc = 0x1F0124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0120u;
    // 0x1f0124: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F0120u, 0x1F0128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0128u;
label_1f0128:
    // 0x1f0128: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1f0128u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f012c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1f012cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0130: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1f0130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f0134: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1f0134u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x1f0138: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1f0138u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1f013c: 0x32c28000  andi        $v0, $s6, 0x8000
    ctx->pc = 0x1f013cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)32768);
    // 0x1f0140: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1F0140u;
    {
        const bool branch_taken_0x1f0140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0140u;
        // 0x1f0144: 0xaef4e200  sw          $s4, -0x1E00($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4294959616), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0140) {
            ctx->pc = 0x1F01D4u;
            return;
        }
    }
    ctx->pc = 0x1F0148u;
    // 0x1f0148: 0x3c130022  lui         $s3, 0x22
    ctx->pc = 0x1f0148u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
    // 0x1f014c: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F014Cu;
    SET_GPR_U32(ctx, 31, 0x1F0154u);
    ctx->pc = 0x1F0150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F014Cu;
    // 0x1f0150: 0x8e64a46c  lw          $a0, -0x5B94($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F014Cu, 0x1F0154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0154u;
label_1f0154:
    // 0x1f0154: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x1f0154u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x1f0158: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f0158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f015c: 0x8ce3a3d8  lw          $v1, -0x5C28($a3)
    ctx->pc = 0x1f015cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21A3D8u));
    // 0x1f0160: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f0160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f0164: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0164u;
    {
        const bool branch_taken_0x1f0164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0164u;
        // 0x1f0168: 0x3230000f  andi        $s0, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0164) {
            ctx->pc = 0x1F0188u;
            return;
        }
    }
    ctx->pc = 0x1F016Cu;
    // 0x1f016c: 0x8ee3e200  lw          $v1, -0x1E00($s7)
    ctx->pc = 0x1f016cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294959616)));
    // 0x1f0170: 0x3c1e0039  lui         $fp, 0x39
    ctx->pc = 0x1f0170u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)57 << 16));
    // 0x1f0174: 0x31023  negu        $v0, $v1
    ctx->pc = 0x1f0174u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1f0178: 0xace3a3d8  sw          $v1, -0x5C28($a3)
    ctx->pc = 0x1f0178u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294943704), GPR_U32(ctx, 3));
    // 0x1f017c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1F017Cu;
    {
        const bool branch_taken_0x1f017c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F017Cu;
        // 0x1f0180: 0xaee2e200  sw          $v0, -0x1E00($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4294959616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f017c) {
            ctx->pc = 0x1F01C4u;
            return;
        }
    }
    ctx->pc = 0x1F0184u;
    // 0x1f0184: 0x0  nop
    ctx->pc = 0x1f0184u;
    // NOP
    ctx->pc = 0x1f0188u;
}
