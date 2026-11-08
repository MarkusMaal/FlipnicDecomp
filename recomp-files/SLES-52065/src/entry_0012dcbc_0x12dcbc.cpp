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

// Function: entry_0012dcbc
// Address: 0x12dcbc - 0x12de60
void entry_0012dcbc_0x12dcbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012dcbc_0x12dcbc");
#endif

    switch (ctx->pc) {
        case 0x12dcd8u: goto label_12dcd8;
        case 0x12dce0u: goto label_12dce0;
        case 0x12dcf0u: goto label_12dcf0;
        case 0x12dd04u: goto label_12dd04;
        case 0x12dd7cu: goto label_12dd7c;
        default: break;
    }

    ctx->pc = 0x12dcbcu;

    // 0x12dcbc: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x12dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x12dcc0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12dcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12dcc4: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x12dcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x12dcc8: 0x24a5ecb8  addiu       $a1, $a1, -0x1348
    ctx->pc = 0x12dcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962360));
    // 0x12dccc: 0x27a6010c  addiu       $a2, $sp, 0x10C
    ctx->pc = 0x12dcccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x12dcd0: 0xc04889c  jal         func_122270
    ctx->pc = 0x12DCD0u;
    SET_GPR_U32(ctx, 31, 0x12DCD8u);
    ctx->pc = 0x12DCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DCD0u;
    // 0x12dcd4: 0x549021  addu        $s2, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x12DCD0u, 0x12DCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DCD8u;
label_12dcd8:
    // 0x12dcd8: 0xc080748  jal         func_201D20
    ctx->pc = 0x12DCD8u;
    SET_GPR_U32(ctx, 31, 0x12DCE0u);
    ctx->pc = 0x12DCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DCD8u;
    // 0x12dcdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x12DCD8u, 0x12DCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DCE0u;
label_12dce0:
    // 0x12dce0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x12dce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dce4: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x12dce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x12dce8: 0xc049c74  jal         func_1271D0
    ctx->pc = 0x12DCE8u;
    SET_GPR_U32(ctx, 31, 0x12DCF0u);
    ctx->pc = 0x12DCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DCE8u;
    // 0x12dcec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x12DCE8u, 0x12DCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DCF0u;
label_12dcf0:
    // 0x12dcf0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x12dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x12dcf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12dcf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dcf8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x12dcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12dcfc: 0xc0485b4  jal         func_1216D0
    ctx->pc = 0x12DCFCu;
    SET_GPR_U32(ctx, 31, 0x12DD04u);
    ctx->pc = 0x12DD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DCFCu;
    // 0x12dd00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216D0u, 0x12DCFCu, 0x12DD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD04u;
label_12dd04:
    // 0x12dd04: 0xc642001c  lwc1        $f2, 0x1C($s2)
    ctx->pc = 0x12dd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12dd08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12dd08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd0c: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x12dd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12dd10: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x12dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x12dd14: 0x27b60084  addiu       $s6, $sp, 0x84
    ctx->pc = 0x12dd14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x12dd18: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12dd18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12dd1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12dd1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12dd20: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x12dd20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x12dd24: 0x24a5ecc8  addiu       $a1, $a1, -0x1338
    ctx->pc = 0x12dd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962376));
    // 0x12dd28: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x12dd28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd2c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x12dd2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x12dd30: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12dd30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12dd34: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x12dd34u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x12dd38: 0xe7a1008c  swc1        $f1, 0x8C($sp)
    ctx->pc = 0x12dd38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x12dd3c: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x12dd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12dd40: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x12dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12dd44: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x12dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x12dd48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12dd48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12dd4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12dd50: 0xafb20080  sw          $s2, 0x80($sp)
    ctx->pc = 0x12dd50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 18));
    // 0x12dd54: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12dd54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12dd58: 0x0  nop
    ctx->pc = 0x12dd58u;
    // NOP
    // 0x12dd5c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x12dd5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x12dd60: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x12dd60u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x12dd64: 0x0  nop
    ctx->pc = 0x12dd64u;
    // NOP
    // 0x12dd68: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x12dd68u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x12dd6c: 0x0  nop
    ctx->pc = 0x12dd6cu;
    // NOP
    // 0x12dd70: 0x0  nop
    ctx->pc = 0x12dd70u;
    // NOP
    // 0x12dd74: 0xc0805e6  jal         func_201798
    ctx->pc = 0x12DD74u;
    SET_GPR_U32(ctx, 31, 0x12DD7Cu);
    ctx->pc = 0x12DD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DD74u;
    // 0x12dd78: 0xe7a00090  swc1        $f0, 0x90($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x201798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201798u, 0x12DD74u, 0x12DD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD7Cu;
label_12dd7c:
    // 0x12dd7c: 0xafb30088  sw          $s3, 0x88($sp)
    ctx->pc = 0x12dd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 19));
    // 0x12dd80: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x12dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x12dd84: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x12dd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x12dd88: 0xafa30094  sw          $v1, 0x94($sp)
    ctx->pc = 0x12dd88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
    // 0x12dd8c: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x12dd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12dd90: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x12dd90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
    // 0x12dd94: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x12dd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x12dd98: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x12dd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
    // 0x12dd9c: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x12dd9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12dda0: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x12DDA0u;
    {
        const bool branch_taken_0x12dda0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12dda0) {
            ctx->pc = 0x12DE60u;
            return;
        }
    }
    ctx->pc = 0x12DDA8u;
    // 0x12dda8: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x12dda8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x12ddac: 0x2442ffbf  addiu       $v0, $v0, -0x41
    ctx->pc = 0x12ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967231));
    // 0x12ddb0: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x12ddb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x12ddb4: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x12DDB4u;
    {
        const bool branch_taken_0x12ddb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DDB4u;
        // 0x12ddb8: 0x27a30080  addiu       $v1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ddb4) {
            ctx->pc = 0x12DE60u;
            return;
        }
    }
    ctx->pc = 0x12DDBCu;
    // 0x12ddbc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12ddc0: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x12ddc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12ddc4: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x12ddc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x12ddc8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x12ddc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12ddcc: 0x27a700d4  addiu       $a3, $sp, 0xD4
    ctx->pc = 0x12ddccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x12ddd0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x12ddd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ddd4: 0x27a200a4  addiu       $v0, $sp, 0xA4
    ctx->pc = 0x12ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x12ddd8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x12ddd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dddc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x12dddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x12dde0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x12dde0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x12dde4: 0xe4e30000  swc1        $f3, 0x0($a3)
    ctx->pc = 0x12dde4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x12dde8: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x12dde8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x12ddec: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x12ddecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x12ddf0: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x12ddf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x12ddf4: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x12ddf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12ddf8: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x12ddf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12ddfc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x12ddfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12de00: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x12de00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12de04: 0xe4e30010  swc1        $f3, 0x10($a3)
    ctx->pc = 0x12de04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x12de08: 0xe4e20014  swc1        $f2, 0x14($a3)
    ctx->pc = 0x12de08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x12de0c: 0xe4e10018  swc1        $f1, 0x18($a3)
    ctx->pc = 0x12de0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x12de10: 0xe4e0001c  swc1        $f0, 0x1C($a3)
    ctx->pc = 0x12de10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
    // 0x12de14: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x12de14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12de18: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x12de18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x12de1c: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x12de1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12de20: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x12de20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12de24: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x12de24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12de28: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x12de28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12de2c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x12de2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x12de30: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x12de30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12de34: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x12de34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x12de38: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x12de38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x12de3c: 0xc4e30010  lwc1        $f3, 0x10($a3)
    ctx->pc = 0x12de3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12de40: 0xc4e20014  lwc1        $f2, 0x14($a3)
    ctx->pc = 0x12de40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12de44: 0xc4e10018  lwc1        $f1, 0x18($a3)
    ctx->pc = 0x12de44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12de48: 0xc4e0001c  lwc1        $f0, 0x1C($a3)
    ctx->pc = 0x12de48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12de4c: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x12de4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x12de50: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x12de50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x12de54: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x12de54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x12de58: 0xc04bba4  jal         func_12EE90
    ctx->pc = 0x12DE58u;
    SET_GPR_U32(ctx, 31, 0x12DE60u);
    ctx->pc = 0x12DE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DE58u;
    // 0x12de5c: 0xe440001c  swc1        $f0, 0x1C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE90u, 0x12DE58u, 0x12DE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE60u;
}
