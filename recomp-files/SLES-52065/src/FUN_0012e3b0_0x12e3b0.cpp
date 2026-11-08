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

// Function: FUN_0012e3b0
// Address: 0x12e3b0 - 0x12e484
void FUN_0012e3b0_0x12e3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012e3b0_0x12e3b0");
#endif

    switch (ctx->pc) {
        case 0x12e3e0u: goto label_12e3e0;
        case 0x12e3f0u: goto label_12e3f0;
        case 0x12e400u: goto label_12e400;
        case 0x12e42cu: goto label_12e42c;
        case 0x12e438u: goto label_12e438;
        case 0x12e44cu: goto label_12e44c;
        case 0x12e470u: goto label_12e470;
        default: break;
    }

    ctx->pc = 0x12e3b0u;

    // 0x12e3b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12e3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12e3b4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x12e3b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e3b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12e3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12e3bc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x12e3bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e3c0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x12e3c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12e3c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12e3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e3c8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x12e3c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e3cc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x12e3ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e3d0: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x12e3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x12e3d4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x12e3d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12e3d8: 0xc04b81c  jal         func_12E070
    ctx->pc = 0x12E3D8u;
    SET_GPR_U32(ctx, 31, 0x12E3E0u);
    ctx->pc = 0x12E3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E3D8u;
    // 0x12e3dc: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E070u, 0x12E3D8u, 0x12E3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E3E0u;
label_12e3e0:
    // 0x12e3e0: 0x27a20028  addiu       $v0, $sp, 0x28
    ctx->pc = 0x12e3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x12e3e4: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x12e3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x12e3e8: 0xc04b8d8  jal         func_12E360
    ctx->pc = 0x12E3E8u;
    SET_GPR_U32(ctx, 31, 0x12E3F0u);
    ctx->pc = 0x12E3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E3E8u;
    // 0x12e3ec: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E360u, 0x12E3E8u, 0x12E3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E3F0u;
label_12e3f0:
    // 0x12e3f0: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x12e3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x12e3f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e3f8: 0xc04b8d4  jal         func_12E350
    ctx->pc = 0x12E3F8u;
    SET_GPR_U32(ctx, 31, 0x12E400u);
    ctx->pc = 0x12E3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E3F8u;
    // 0x12e3fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E350u, 0x12E3F8u, 0x12E400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E400u;
label_12e400:
    // 0x12e400: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x12e400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x12e404: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x12e404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x12e408: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x12e408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x12e40c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x12e40cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x12e410: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x12e410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x12e414: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x12e414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12e418: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x12e418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x12e41c: 0x83a70048  lb          $a3, 0x48($sp)
    ctx->pc = 0x12e41cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12e420: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x12e420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x12e424: 0xc04b944  jal         func_12E510
    ctx->pc = 0x12E424u;
    SET_GPR_U32(ctx, 31, 0x12E42Cu);
    ctx->pc = 0x12E428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E424u;
    // 0x12e428: 0xa23021  addu        $a2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E510u, 0x12E424u, 0x12E42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E42Cu;
label_12e42c:
    // 0x12e42c: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x12e42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x12e430: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x12E430u;
    SET_GPR_U32(ctx, 31, 0x12E438u);
    ctx->pc = 0x12E434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E430u;
    // 0x12e434: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x12E430u, 0x12E438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E438u;
label_12e438:
    // 0x12e438: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x12e438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x12e43c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x12e43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12e440: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x12e440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x12e444: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12E444u;
    {
        const bool branch_taken_0x12e444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E444u;
        // 0x12e448: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e444) {
            ctx->pc = 0x12E458u;
            goto label_12e458;
        }
    }
    ctx->pc = 0x12E44Cu;
label_12e44c:
    // 0x12e44c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x12e44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e450: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x12e450u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x12e454: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x12e454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_12e458:
    // 0x12e458: 0x0  nop
    ctx->pc = 0x12e458u;
    // NOP
    // 0x12e45c: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12E45Cu;
    {
        const bool branch_taken_0x12e45c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12e45c) {
            ctx->pc = 0x12E44Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e44c;
        }
    }
    ctx->pc = 0x12E464u;
    // 0x12e464: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x12e464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x12e468: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x12E468u;
    SET_GPR_U32(ctx, 31, 0x12E470u);
    ctx->pc = 0x12E46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E468u;
    // 0x12e46c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x12E468u, 0x12E470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E470u;
label_12e470:
    // 0x12e470: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x12e470u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x12e474: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12e474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e478: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x12e478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12e47c: 0x3e00008  jr          $ra
    ctx->pc = 0x12E47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E47Cu;
        // 0x12e480: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E484u;
}
