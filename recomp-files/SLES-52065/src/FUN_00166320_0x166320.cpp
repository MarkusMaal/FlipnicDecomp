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

// Function: FUN_00166320
// Address: 0x166320 - 0x166444
void FUN_00166320_0x166320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00166320_0x166320");
#endif

    switch (ctx->pc) {
        case 0x166378u: goto label_166378;
        case 0x1663ccu: goto label_1663cc;
        case 0x1663f8u: goto label_1663f8;
        default: break;
    }

    ctx->pc = 0x166320u;

    // 0x166320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x166320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x166324: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x166324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x166328: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x166328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16632c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x16632cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x166330: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x166334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166338: 0xc4810210  lwc1        $f1, 0x210($a0)
    ctx->pc = 0x166338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16633c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16633cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x166340: 0x0  nop
    ctx->pc = 0x166340u;
    // NOP
    // 0x166344: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x166344u;
    {
        const bool branch_taken_0x166344 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x166348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166344u;
        // 0x166348: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166344) {
            ctx->pc = 0x166354u;
            goto label_166354;
        }
    }
    ctx->pc = 0x16634Cu;
    // 0x16634c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x16634Cu;
    {
        const bool branch_taken_0x16634c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16634Cu;
        // 0x166350: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16634c) {
            ctx->pc = 0x166434u;
            goto label_166434;
        }
    }
    ctx->pc = 0x166354u;
label_166354:
    // 0x166354: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x166354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166358: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x166358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16635c: 0x0  nop
    ctx->pc = 0x16635cu;
    // NOP
    // 0x166360: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x166360u;
    {
        const bool branch_taken_0x166360 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x166364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166360u;
        // 0x166364: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166360) {
            ctx->pc = 0x166370u;
            goto label_166370;
        }
    }
    ctx->pc = 0x166368u;
    // 0x166368: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x166368u;
    {
        const bool branch_taken_0x166368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166368u;
        // 0x16636c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166368) {
            ctx->pc = 0x166438u;
            goto label_166438;
        }
    }
    ctx->pc = 0x166370u;
label_166370:
    // 0x166370: 0xc059990  jal         func_166640
    ctx->pc = 0x166370u;
    SET_GPR_U32(ctx, 31, 0x166378u);
    ctx->pc = 0x166640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166640u, 0x166370u, 0x166378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166378u;
label_166378:
    // 0x166378: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x166378u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x16637c: 0x1420002c  bnez        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x16637Cu;
    {
        const bool branch_taken_0x16637c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16637c) {
            ctx->pc = 0x166430u;
            goto label_166430;
        }
    }
    ctx->pc = 0x166384u;
    // 0x166384: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x166384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x166388: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x166388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16638c: 0x10430026  beq         $v0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x16638Cu;
    {
        const bool branch_taken_0x16638c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x166390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16638Cu;
        // 0x166390: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16638c) {
            ctx->pc = 0x166428u;
            goto label_166428;
        }
    }
    ctx->pc = 0x166394u;
    // 0x166394: 0x8602022e  lh          $v0, 0x22E($s0)
    ctx->pc = 0x166394u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 558)));
    // 0x166398: 0xa6020226  sh          $v0, 0x226($s0)
    ctx->pc = 0x166398u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 550), (uint16_t)GPR_U32(ctx, 2));
    // 0x16639c: 0xa6030224  sh          $v1, 0x224($s0)
    ctx->pc = 0x16639cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 548), (uint16_t)GPR_U32(ctx, 3));
    // 0x1663a0: 0x86020222  lh          $v0, 0x222($s0)
    ctx->pc = 0x1663a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x1663a4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1663A4u;
    {
        const bool branch_taken_0x1663a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1663a4) {
            ctx->pc = 0x1663DCu;
            goto label_1663dc;
        }
    }
    ctx->pc = 0x1663ACu;
    // 0x1663ac: 0x86030220  lh          $v1, 0x220($s0)
    ctx->pc = 0x1663acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1663b0: 0x8602022c  lh          $v0, 0x22C($s0)
    ctx->pc = 0x1663b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x1663b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1663b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1663b8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1663b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1663bc: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1663BCu;
    {
        const bool branch_taken_0x1663bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1663C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663BCu;
        // 0x1663c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1663bc) {
            ctx->pc = 0x1663DCu;
            goto label_1663dc;
        }
    }
    ctx->pc = 0x1663C4u;
    // 0x1663c4: 0xc042118  jal         func_108460
    ctx->pc = 0x1663C4u;
    SET_GPR_U32(ctx, 31, 0x1663CCu);
    ctx->pc = 0x1663C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1663C4u;
    // 0x1663c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1663C4u, 0x1663CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1663CCu;
label_1663cc:
    // 0x1663cc: 0x86020220  lh          $v0, 0x220($s0)
    ctx->pc = 0x1663ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1663d0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1663d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1663d4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1663D4u;
    {
        const bool branch_taken_0x1663d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1663D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663D4u;
        // 0x1663d8: 0xa6020220  sh          $v0, 0x220($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1663d4) {
            ctx->pc = 0x166404u;
            goto label_166404;
        }
    }
    ctx->pc = 0x1663DCu;
label_1663dc:
    // 0x1663dc: 0x86030220  lh          $v1, 0x220($s0)
    ctx->pc = 0x1663dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1663e0: 0x8602022c  lh          $v0, 0x22C($s0)
    ctx->pc = 0x1663e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x1663e4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1663e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1663e8: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1663E8u;
    {
        const bool branch_taken_0x1663e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1663ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663E8u;
        // 0x1663ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1663e8) {
            ctx->pc = 0x166404u;
            goto label_166404;
        }
    }
    ctx->pc = 0x1663F0u;
    // 0x1663f0: 0xc042118  jal         func_108460
    ctx->pc = 0x1663F0u;
    SET_GPR_U32(ctx, 31, 0x1663F8u);
    ctx->pc = 0x1663F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1663F0u;
    // 0x1663f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1663F0u, 0x1663F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1663F8u;
label_1663f8:
    // 0x1663f8: 0x86020220  lh          $v0, 0x220($s0)
    ctx->pc = 0x1663f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1663fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1663fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x166400: 0xa6020220  sh          $v0, 0x220($s0)
    ctx->pc = 0x166400u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 2));
label_166404:
    // 0x166404: 0x86020234  lh          $v0, 0x234($s0)
    ctx->pc = 0x166404u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x166408: 0xa6020222  sh          $v0, 0x222($s0)
    ctx->pc = 0x166408u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 2));
    // 0x16640c: 0x86030220  lh          $v1, 0x220($s0)
    ctx->pc = 0x16640cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x166410: 0x8602022c  lh          $v0, 0x22C($s0)
    ctx->pc = 0x166410u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x166414: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x166414u;
    {
        const bool branch_taken_0x166414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x166414) {
            ctx->pc = 0x166424u;
            goto label_166424;
        }
    }
    ctx->pc = 0x16641Cu;
    // 0x16641c: 0x86020230  lh          $v0, 0x230($s0)
    ctx->pc = 0x16641cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x166420: 0xa6020226  sh          $v0, 0x226($s0)
    ctx->pc = 0x166420u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 550), (uint16_t)GPR_U32(ctx, 2));
label_166424:
    // 0x166424: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166428:
    // 0x166428: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x166428u;
    {
        const bool branch_taken_0x166428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166428) {
            ctx->pc = 0x166434u;
            goto label_166434;
        }
    }
    ctx->pc = 0x166430u;
label_166430:
    // 0x166430: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x166430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_166434:
    // 0x166434: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x166434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_166438:
    // 0x166438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16643c: 0x3e00008  jr          $ra
    ctx->pc = 0x16643Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16643Cu;
        // 0x166440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16643Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166444u;
}
