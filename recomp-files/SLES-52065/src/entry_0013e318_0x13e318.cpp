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

// Function: entry_0013e318
// Address: 0x13e318 - 0x13e3e0
void entry_0013e318_0x13e318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e318_0x13e318");
#endif

    switch (ctx->pc) {
        case 0x13e320u: goto label_13e320;
        case 0x13e33cu: goto label_13e33c;
        case 0x13e374u: goto label_13e374;
        case 0x13e384u: goto label_13e384;
        case 0x13e394u: goto label_13e394;
        case 0x13e3c0u: goto label_13e3c0;
        case 0x13e3ccu: goto label_13e3cc;
        default: break;
    }

    ctx->pc = 0x13e318u;

    // 0x13e318: 0xc04d71c  jal         func_135C70
    ctx->pc = 0x13E318u;
    SET_GPR_U32(ctx, 31, 0x13E320u);
    ctx->pc = 0x135C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135C70u, 0x13E318u, 0x13E320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E320u;
label_13e320:
    // 0x13e320: 0x10802b  sltu        $s0, $zero, $s0
    ctx->pc = 0x13e320u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x13e324: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13e324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e328: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x13e328u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x13e32c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x13e32cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e330: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13e330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e334: 0xc04b8ec  jal         func_12E3B0
    ctx->pc = 0x13E334u;
    SET_GPR_U32(ctx, 31, 0x13E33Cu);
    ctx->pc = 0x13E338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E334u;
    // 0x13e338: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E3B0u, 0x13E334u, 0x13E33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E33Cu;
label_13e33c:
    // 0x13e33c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x13e33cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x13e340: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13e340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13e344: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x13e344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e348: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x13e348u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e34c: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x13e34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x13e350: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x13e350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e354: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13e354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e358: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13e358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13e35c: 0x0  nop
    ctx->pc = 0x13e35cu;
    // NOP
    // 0x13e360: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x13e360u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x13e364: 0x0  nop
    ctx->pc = 0x13e364u;
    // NOP
    // 0x13e368: 0x0  nop
    ctx->pc = 0x13e368u;
    // NOP
    // 0x13e36c: 0xc04b81c  jal         func_12E070
    ctx->pc = 0x13E36Cu;
    SET_GPR_U32(ctx, 31, 0x13E374u);
    ctx->pc = 0x13E370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E36Cu;
    // 0x13e370: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E070u, 0x13E36Cu, 0x13E374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E374u;
label_13e374:
    // 0x13e374: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x13e374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x13e378: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x13e378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x13e37c: 0xc04b8d8  jal         func_12E360
    ctx->pc = 0x13E37Cu;
    SET_GPR_U32(ctx, 31, 0x13E384u);
    ctx->pc = 0x13E380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E37Cu;
    // 0x13e380: 0xafa2010c  sw          $v0, 0x10C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E360u, 0x13E37Cu, 0x13E384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E384u;
label_13e384:
    // 0x13e384: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x13e384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x13e388: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13e388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e38c: 0xc04b8d4  jal         func_12E350
    ctx->pc = 0x13E38Cu;
    SET_GPR_U32(ctx, 31, 0x13E394u);
    ctx->pc = 0x13E390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E38Cu;
    // 0x13e390: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E350u, 0x13E38Cu, 0x13E394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E394u;
label_13e394:
    // 0x13e394: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x13e394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x13e398: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x13e398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x13e39c: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x13e39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x13e3a0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x13e3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x13e3a4: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x13e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x13e3a8: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x13e3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x13e3ac: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x13e3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x13e3b0: 0x83a70108  lb          $a3, 0x108($sp)
    ctx->pc = 0x13e3b0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x13e3b4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13e3b8: 0xc04b944  jal         func_12E510
    ctx->pc = 0x13E3B8u;
    SET_GPR_U32(ctx, 31, 0x13E3C0u);
    ctx->pc = 0x13E3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E3B8u;
    // 0x13e3bc: 0xa23021  addu        $a2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E510u, 0x13E3B8u, 0x13E3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E3C0u;
label_13e3c0:
    // 0x13e3c0: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x13e3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x13e3c4: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x13E3C4u;
    SET_GPR_U32(ctx, 31, 0x13E3CCu);
    ctx->pc = 0x13E3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E3C4u;
    // 0x13e3c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x13E3C4u, 0x13E3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E3CCu;
label_13e3cc:
    // 0x13e3cc: 0x14082b  sltu        $at, $zero, $s4
    ctx->pc = 0x13e3ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x13e3d0: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x13E3D0u;
    {
        const bool branch_taken_0x13e3d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E3D0u;
        // 0x13e3d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e3d0) {
            ctx->pc = 0x13E484u;
            return;
        }
    }
    ctx->pc = 0x13E3D8u;
    // 0x13e3d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13e3d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e3dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13e3dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13e3e0u;
}
