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

// Function: FUN_001c4af0
// Address: 0x1c4af0 - 0x1c4fe0
void FUN_001c4af0_0x1c4af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c4af0_0x1c4af0");
#endif

    switch (ctx->pc) {
        case 0x1c4b18u: goto label_1c4b18;
        case 0x1c4c08u: goto label_1c4c08;
        case 0x1c4c14u: goto label_1c4c14;
        case 0x1c4c2cu: goto label_1c4c2c;
        case 0x1c4c44u: goto label_1c4c44;
        case 0x1c4c4cu: goto label_1c4c4c;
        case 0x1c4c54u: goto label_1c4c54;
        case 0x1c4c68u: goto label_1c4c68;
        case 0x1c4c78u: goto label_1c4c78;
        case 0x1c4d64u: goto label_1c4d64;
        case 0x1c4d84u: goto label_1c4d84;
        case 0x1c4d90u: goto label_1c4d90;
        case 0x1c4da8u: goto label_1c4da8;
        case 0x1c4dc8u: goto label_1c4dc8;
        case 0x1c4dfcu: goto label_1c4dfc;
        case 0x1c4e1cu: goto label_1c4e1c;
        case 0x1c4e30u: goto label_1c4e30;
        case 0x1c4e40u: goto label_1c4e40;
        case 0x1c4e58u: goto label_1c4e58;
        case 0x1c4e60u: goto label_1c4e60;
        case 0x1c4e6cu: goto label_1c4e6c;
        case 0x1c4e80u: goto label_1c4e80;
        case 0x1c4e88u: goto label_1c4e88;
        case 0x1c4e94u: goto label_1c4e94;
        case 0x1c4ea8u: goto label_1c4ea8;
        case 0x1c4eb4u: goto label_1c4eb4;
        case 0x1c4ec4u: goto label_1c4ec4;
        case 0x1c4eccu: goto label_1c4ecc;
        case 0x1c4ee8u: goto label_1c4ee8;
        case 0x1c4fa4u: goto label_1c4fa4;
        case 0x1c4fbcu: goto label_1c4fbc;
        case 0x1c4fc4u: goto label_1c4fc4;
        default: break;
    }

    ctx->pc = 0x1c4af0u;

    // 0x1c4af0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c4af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c4af4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c4af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c4af8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c4af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c4afc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c4afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4b00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c4b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c4b04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c4b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c4b08: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c4b08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4b0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c4b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c4b10: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C4B10u;
    SET_GPR_U32(ctx, 31, 0x1C4B18u);
    ctx->pc = 0x1C4B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4B10u;
    // 0x1c4b14: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C4B10u, 0x1C4B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4B18u;
label_1c4b18:
    // 0x1c4b18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c4b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4b1c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4b20: 0x8022f808  lb          $v0, -0x7F8($at)
    ctx->pc = 0x1c4b20u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F808u));
    // 0x1c4b24: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4B24u;
    {
        const bool branch_taken_0x1c4b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4b24) {
            ctx->pc = 0x1C4B44u;
            goto label_1c4b44;
        }
    }
    ctx->pc = 0x1C4B2Cu;
    // 0x1c4b2c: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1c4b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1c4b30: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4b34: 0xac23f800  sw          $v1, -0x800($at)
    ctx->pc = 0x1c4b34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F800u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F800u, _value); } while (0);
    // 0x1c4b38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4b3c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4b40: 0xa022f808  sb          $v0, -0x7F8($at)
    ctx->pc = 0x1c4b40u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F808u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F808u, _value); } while (0);
label_1c4b44:
    // 0x1c4b44: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4b48: 0x8022f818  lb          $v0, -0x7E8($at)
    ctx->pc = 0x1c4b48u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F818u));
    // 0x1c4b4c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4B4Cu;
    {
        const bool branch_taken_0x1c4b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4b4c) {
            ctx->pc = 0x1C4B6Cu;
            goto label_1c4b6c;
        }
    }
    ctx->pc = 0x1C4B54u;
    // 0x1c4b54: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1c4b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c4b58: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4b5c: 0xac23f810  sw          $v1, -0x7F0($at)
    ctx->pc = 0x1c4b5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F810u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F810u, _value); } while (0);
    // 0x1c4b60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4b64: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4b68: 0xa022f818  sb          $v0, -0x7E8($at)
    ctx->pc = 0x1c4b68u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F818u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F818u, _value); } while (0);
label_1c4b6c:
    // 0x1c4b6c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4b70: 0x8c24f800  lw          $a0, -0x800($at)
    ctx->pc = 0x1c4b70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x36F800u));
    // 0x1c4b74: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1c4b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4b78: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1c4b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4b7c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4b80: 0x8c23f810  lw          $v1, -0x7F0($at)
    ctx->pc = 0x1c4b80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F810u));
    // 0x1c4b84: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c4b84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c4b88: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4b8c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c4b8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c4b90: 0x8022f828  lb          $v0, -0x7D8($at)
    ctx->pc = 0x1c4b90u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F828u));
    // 0x1c4b94: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1c4b94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1c4b98: 0x0  nop
    ctx->pc = 0x1c4b98u;
    // NOP
    // 0x1c4b9c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1c4b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c4ba0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1c4ba0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c4ba4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4BA4u;
    {
        const bool branch_taken_0x1c4ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4BA4u;
        // 0x1c4ba8: 0x833021  addu        $a2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ba4) {
            ctx->pc = 0x1C4BC4u;
            goto label_1c4bc4;
        }
    }
    ctx->pc = 0x1C4BACu;
    // 0x1c4bac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c4bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c4bb0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4bb4: 0xac23f820  sw          $v1, -0x7E0($at)
    ctx->pc = 0x1c4bb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F820u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F820u, _value); } while (0);
    // 0x1c4bb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4bbc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4bc0: 0xa022f828  sb          $v0, -0x7D8($at)
    ctx->pc = 0x1c4bc0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F828u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F828u, _value); } while (0);
label_1c4bc4:
    // 0x1c4bc4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4bc8: 0x8022f838  lb          $v0, -0x7C8($at)
    ctx->pc = 0x1c4bc8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F838u));
    // 0x1c4bcc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4BCCu;
    {
        const bool branch_taken_0x1c4bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4BCCu;
        // 0x1c4bd0: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4bcc) {
            ctx->pc = 0x1C4BE8u;
            goto label_1c4be8;
        }
    }
    ctx->pc = 0x1C4BD4u;
    // 0x1c4bd4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4bd8: 0xac23f830  sw          $v1, -0x7D0($at)
    ctx->pc = 0x1c4bd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F830u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F830u, _value); } while (0);
    // 0x1c4bdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4be0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4be4: 0xa022f838  sb          $v0, -0x7C8($at)
    ctx->pc = 0x1c4be4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F838u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F838u, _value); } while (0);
label_1c4be8:
    // 0x1c4be8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1c4be8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4bec: 0x8e640068  lw          $a0, 0x68($s3)
    ctx->pc = 0x1c4becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x1c4bf0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1c4bf0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4bf4: 0x0  nop
    ctx->pc = 0x1c4bf4u;
    // NOP
    // 0x1c4bf8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c4bf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c4bfc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1c4bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c4c00: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1C4C00u;
    SET_GPR_U32(ctx, 31, 0x1C4C08u);
    ctx->pc = 0x1C4C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C00u;
    // 0x1c4c04: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1C4C00u, 0x1C4C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C08u;
label_1c4c08:
    // 0x1c4c08: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x1c4c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1c4c0c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1C4C0Cu;
    SET_GPR_U32(ctx, 31, 0x1C4C14u);
    ctx->pc = 0x1C4C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C0Cu;
    // 0x1c4c10: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1C4C0Cu, 0x1C4C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C14u;
label_1c4c14:
    // 0x1c4c14: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x1c4c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4c18: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x1c4c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c4c1c: 0xc7ae0058  lwc1        $f14, 0x58($sp)
    ctx->pc = 0x1c4c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c4c20: 0xc7af005c  lwc1        $f15, 0x5C($sp)
    ctx->pc = 0x1c4c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c4c24: 0xc062860  jal         func_18A180
    ctx->pc = 0x1C4C24u;
    SET_GPR_U32(ctx, 31, 0x1C4C2Cu);
    ctx->pc = 0x1C4C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C24u;
    // 0x1c4c28: 0x8e640068  lw          $a0, 0x68($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1C4C24u, 0x1C4C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C2Cu;
label_1c4c2c:
    // 0x1c4c2c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4c30: 0xc42cf820  lwc1        $f12, -0x7E0($at)
    ctx->pc = 0x1c4c30u;
    { uint32_t bits = FAST_READ32(0x36F820u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4c34: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4c38: 0xc42df830  lwc1        $f13, -0x7D0($at)
    ctx->pc = 0x1c4c38u;
    { uint32_t bits = FAST_READ32(0x36F830u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c4c3c: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1C4C3Cu;
    SET_GPR_U32(ctx, 31, 0x1C4C44u);
    ctx->pc = 0x1C4C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C3Cu;
    // 0x1c4c40: 0x8e640068  lw          $a0, 0x68($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1C4C3Cu, 0x1C4C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C44u;
label_1c4c44:
    // 0x1c4c44: 0xc073120  jal         func_1CC480
    ctx->pc = 0x1C4C44u;
    SET_GPR_U32(ctx, 31, 0x1C4C4Cu);
    ctx->pc = 0x1CC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC480u, 0x1C4C44u, 0x1C4C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C4Cu;
label_1c4c4c:
    // 0x1c4c4c: 0xc073134  jal         func_1CC4D0
    ctx->pc = 0x1C4C4Cu;
    SET_GPR_U32(ctx, 31, 0x1C4C54u);
    ctx->pc = 0x1C4C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C4Cu;
    // 0x1c4c50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC4D0u, 0x1C4C4Cu, 0x1C4C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C54u;
label_1c4c54:
    // 0x1c4c54: 0x8e640068  lw          $a0, 0x68($s3)
    ctx->pc = 0x1c4c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x1c4c58: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c4c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c4c5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c4c5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4c60: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1C4C60u;
    SET_GPR_U32(ctx, 31, 0x1C4C68u);
    ctx->pc = 0x1C4C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C60u;
    // 0x1c4c64: 0x24a51ee0  addiu       $a1, $a1, 0x1EE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1C4C60u, 0x1C4C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C68u;
label_1c4c68:
    // 0x1c4c68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c4c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4c6c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c4c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c4c70: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C4C70u;
    SET_GPR_U32(ctx, 31, 0x1C4C78u);
    ctx->pc = 0x1C4C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C70u;
    // 0x1c4c74: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C4C70u, 0x1C4C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C78u;
label_1c4c78:
    // 0x1c4c78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c4c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4c7c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4c80: 0x8022f848  lb          $v0, -0x7B8($at)
    ctx->pc = 0x1c4c80u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F848u));
    // 0x1c4c84: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4C84u;
    {
        const bool branch_taken_0x1c4c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4c84) {
            ctx->pc = 0x1C4CA4u;
            goto label_1c4ca4;
        }
    }
    ctx->pc = 0x1C4C8Cu;
    // 0x1c4c8c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1c4c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c4c90: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4c94: 0xac23f840  sw          $v1, -0x7C0($at)
    ctx->pc = 0x1c4c94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F840u, _value); } while (0);
    // 0x1c4c98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4c9c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4ca0: 0xa022f848  sb          $v0, -0x7B8($at)
    ctx->pc = 0x1c4ca0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F848u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F848u, _value); } while (0);
label_1c4ca4:
    // 0x1c4ca4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4ca8: 0x8022f858  lb          $v0, -0x7A8($at)
    ctx->pc = 0x1c4ca8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F858u));
    // 0x1c4cac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4CACu;
    {
        const bool branch_taken_0x1c4cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4cac) {
            ctx->pc = 0x1C4CCCu;
            goto label_1c4ccc;
        }
    }
    ctx->pc = 0x1C4CB4u;
    // 0x1c4cb4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1c4cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c4cb8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4cbc: 0xac23f850  sw          $v1, -0x7B0($at)
    ctx->pc = 0x1c4cbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F850u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F850u, _value); } while (0);
    // 0x1c4cc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4cc4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4cc8: 0xa022f858  sb          $v0, -0x7A8($at)
    ctx->pc = 0x1c4cc8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F858u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F858u, _value); } while (0);
label_1c4ccc:
    // 0x1c4ccc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4cd0: 0x8c24f840  lw          $a0, -0x7C0($at)
    ctx->pc = 0x1c4cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x36F840u));
    // 0x1c4cd4: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1c4cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4cd8: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1c4cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4cdc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4ce0: 0x8c23f850  lw          $v1, -0x7B0($at)
    ctx->pc = 0x1c4ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F850u));
    // 0x1c4ce4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c4ce4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c4ce8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4cec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c4cecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c4cf0: 0x8022f868  lb          $v0, -0x798($at)
    ctx->pc = 0x1c4cf0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F868u));
    // 0x1c4cf4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1c4cf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1c4cf8: 0x0  nop
    ctx->pc = 0x1c4cf8u;
    // NOP
    // 0x1c4cfc: 0xa48821  addu        $s1, $a1, $a0
    ctx->pc = 0x1c4cfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c4d00: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1c4d00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c4d04: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4D04u;
    {
        const bool branch_taken_0x1c4d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D04u;
        // 0x1c4d08: 0x839021  addu        $s2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d04) {
            ctx->pc = 0x1C4D24u;
            goto label_1c4d24;
        }
    }
    ctx->pc = 0x1C4D0Cu;
    // 0x1c4d0c: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1c4d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x1c4d10: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4d14: 0xac23f860  sw          $v1, -0x7A0($at)
    ctx->pc = 0x1c4d14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F860u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F860u, _value); } while (0);
    // 0x1c4d18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4d1c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4d20: 0xa022f868  sb          $v0, -0x798($at)
    ctx->pc = 0x1c4d20u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F868u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F868u, _value); } while (0);
label_1c4d24:
    // 0x1c4d24: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4d28: 0x8022f878  lb          $v0, -0x788($at)
    ctx->pc = 0x1c4d28u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F878u));
    // 0x1c4d2c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4D2Cu;
    {
        const bool branch_taken_0x1c4d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4d2c) {
            ctx->pc = 0x1C4D4Cu;
            goto label_1c4d4c;
        }
    }
    ctx->pc = 0x1C4D34u;
    // 0x1c4d34: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c4d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c4d38: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4d3c: 0xac23f870  sw          $v1, -0x790($at)
    ctx->pc = 0x1c4d3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F870u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F870u, _value); } while (0);
    // 0x1c4d40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4d44: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4d48: 0xa022f878  sb          $v0, -0x788($at)
    ctx->pc = 0x1c4d48u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F878u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F878u, _value); } while (0);
label_1c4d4c:
    // 0x1c4d4c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4d50: 0xc42cf860  lwc1        $f12, -0x7A0($at)
    ctx->pc = 0x1c4d50u;
    { uint32_t bits = FAST_READ32(0x36F860u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4d54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4d58: 0xc42df870  lwc1        $f13, -0x790($at)
    ctx->pc = 0x1c4d58u;
    { uint32_t bits = FAST_READ32(0x36F870u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c4d5c: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1C4D5Cu;
    SET_GPR_U32(ctx, 31, 0x1C4D64u);
    ctx->pc = 0x1C4D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4D5Cu;
    // 0x1c4d60: 0x8e640068  lw          $a0, 0x68($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1C4D5Cu, 0x1C4D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D64u;
label_1c4d64:
    // 0x1c4d64: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1c4d64u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4d68: 0x8e640068  lw          $a0, 0x68($s3)
    ctx->pc = 0x1c4d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x1c4d6c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1c4d6cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4d70: 0x0  nop
    ctx->pc = 0x1c4d70u;
    // NOP
    // 0x1c4d74: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c4d74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c4d78: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1c4d78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c4d7c: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1C4D7Cu;
    SET_GPR_U32(ctx, 31, 0x1C4D84u);
    ctx->pc = 0x1C4D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4D7Cu;
    // 0x1c4d80: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1C4D7Cu, 0x1C4D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D84u;
label_1c4d84:
    // 0x1c4d84: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x1c4d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1c4d88: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1C4D88u;
    SET_GPR_U32(ctx, 31, 0x1C4D90u);
    ctx->pc = 0x1C4D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4D88u;
    // 0x1c4d8c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1C4D88u, 0x1C4D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D90u;
label_1c4d90:
    // 0x1c4d90: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x1c4d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4d94: 0xc7ad0064  lwc1        $f13, 0x64($sp)
    ctx->pc = 0x1c4d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c4d98: 0xc7ae0068  lwc1        $f14, 0x68($sp)
    ctx->pc = 0x1c4d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c4d9c: 0xc7af006c  lwc1        $f15, 0x6C($sp)
    ctx->pc = 0x1c4d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c4da0: 0xc062860  jal         func_18A180
    ctx->pc = 0x1C4DA0u;
    SET_GPR_U32(ctx, 31, 0x1C4DA8u);
    ctx->pc = 0x1C4DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4DA0u;
    // 0x1c4da4: 0x8e640068  lw          $a0, 0x68($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1C4DA0u, 0x1C4DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4DA8u;
label_1c4da8:
    // 0x1c4da8: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x1c4da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1c4dac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4db0: 0x8e640068  lw          $a0, 0x68($s3)
    ctx->pc = 0x1c4db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x1c4db4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c4db4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c4db8: 0x8c27f7e0  lw          $a3, -0x820($at)
    ctx->pc = 0x1c4db8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x36F7E0u));
    // 0x1c4dbc: 0x24a51ee8  addiu       $a1, $a1, 0x1EE8
    ctx->pc = 0x1c4dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7912));
    // 0x1c4dc0: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1C4DC0u;
    SET_GPR_U32(ctx, 31, 0x1C4DC8u);
    ctx->pc = 0x1C4DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4DC0u;
    // 0x1c4dc4: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1C4DC0u, 0x1C4DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4DC8u;
label_1c4dc8:
    // 0x1c4dc8: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x1c4dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1c4dcc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4dd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c4dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4dd4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c4dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c4dd8: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1c4dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c4ddc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c4ddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4de0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c4de0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4de4: 0x266a0060  addiu       $t2, $s3, 0x60
    ctx->pc = 0x1c4de4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x1c4de8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c4de8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4dec: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x1c4decu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x1c4df0: 0x8c22f7e0  lw          $v0, -0x820($at)
    ctx->pc = 0x1c4df0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F7E0u));
    // 0x1c4df4: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C4DF4u;
    SET_GPR_U32(ctx, 31, 0x1C4DFCu);
    ctx->pc = 0x1C4DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4DF4u;
    // 0x1c4df8: 0x2448ffff  addiu       $t0, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C4DF4u, 0x1C4DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4DFCu;
label_1c4dfc:
    // 0x1c4dfc: 0x8e660060  lw          $a2, 0x60($s3)
    ctx->pc = 0x1c4dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1c4e00: 0x8e620064  lw          $v0, 0x64($s3)
    ctx->pc = 0x1c4e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x1c4e04: 0x10c20021  beq         $a2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C4E04u;
    {
        const bool branch_taken_0x1c4e04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4E04u;
        // 0x1c4e08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e04) {
            ctx->pc = 0x1C4E8Cu;
            goto label_1c4e8c;
        }
    }
    ctx->pc = 0x1C4E0Cu;
    // 0x1c4e0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c4e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e10: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c4e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c4e14: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C4E14u;
    SET_GPR_U32(ctx, 31, 0x1C4E1Cu);
    ctx->pc = 0x1C4E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E14u;
    // 0x1c4e18: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C4E14u, 0x1C4E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E1Cu;
label_1c4e1c:
    // 0x1c4e1c: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1c4e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c4e20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c4e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e24: 0x8e660064  lw          $a2, 0x64($s3)
    ctx->pc = 0x1c4e24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x1c4e28: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C4E28u;
    SET_GPR_U32(ctx, 31, 0x1C4E30u);
    ctx->pc = 0x1C4E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E28u;
    // 0x1c4e2c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C4E28u, 0x1C4E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E30u;
label_1c4e30:
    // 0x1c4e30: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c4e30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4e34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c4e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e38: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C4E38u;
    SET_GPR_U32(ctx, 31, 0x1C4E40u);
    ctx->pc = 0x1C4E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E38u;
    // 0x1c4e3c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C4E38u, 0x1C4E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E40u;
label_1c4e40:
    // 0x1c4e40: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4E40u;
    {
        const bool branch_taken_0x1c4e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4E40u;
        // 0x1c4e44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e40) {
            ctx->pc = 0x1C4E64u;
            goto label_1c4e64;
        }
    }
    ctx->pc = 0x1C4E48u;
    // 0x1c4e48: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c4e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c4e4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c4e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e50: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C4E50u;
    SET_GPR_U32(ctx, 31, 0x1C4E58u);
    ctx->pc = 0x1C4E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E50u;
    // 0x1c4e54: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C4E50u, 0x1C4E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E58u;
label_1c4e58:
    // 0x1c4e58: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C4E58u;
    SET_GPR_U32(ctx, 31, 0x1C4E60u);
    ctx->pc = 0x1C4E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E58u;
    // 0x1c4e5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C4E58u, 0x1C4E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E60u;
label_1c4e60:
    // 0x1c4e60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c4e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c4e64:
    // 0x1c4e64: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C4E64u;
    SET_GPR_U32(ctx, 31, 0x1C4E6Cu);
    ctx->pc = 0x1C4E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E64u;
    // 0x1c4e68: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C4E64u, 0x1C4E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E6Cu;
label_1c4e6c:
    // 0x1c4e6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4E6Cu;
    {
        const bool branch_taken_0x1c4e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4E6Cu;
        // 0x1c4e70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e6c) {
            ctx->pc = 0x1C4E88u;
            goto label_1c4e88;
        }
    }
    ctx->pc = 0x1C4E74u;
    // 0x1c4e74: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c4e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c4e78: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C4E78u;
    SET_GPR_U32(ctx, 31, 0x1C4E80u);
    ctx->pc = 0x1C4E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E78u;
    // 0x1c4e7c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C4E78u, 0x1C4E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E80u;
label_1c4e80:
    // 0x1c4e80: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C4E80u;
    SET_GPR_U32(ctx, 31, 0x1C4E88u);
    ctx->pc = 0x1C4E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E80u;
    // 0x1c4e84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C4E80u, 0x1C4E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E88u;
label_1c4e88:
    // 0x1c4e88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c4e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c4e8c:
    // 0x1c4e8c: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C4E8Cu;
    SET_GPR_U32(ctx, 31, 0x1C4E94u);
    ctx->pc = 0x1C4E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E8Cu;
    // 0x1c4e90: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C4E8Cu, 0x1C4E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E94u;
label_1c4e94:
    // 0x1c4e94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4E94u;
    {
        const bool branch_taken_0x1c4e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4E94u;
        // 0x1c4e98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e94) {
            ctx->pc = 0x1C4EACu;
            goto label_1c4eac;
        }
    }
    ctx->pc = 0x1C4E9Cu;
    // 0x1c4e9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c4e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4ea0: 0xc0713f8  jal         func_1C4FE0
    ctx->pc = 0x1C4EA0u;
    SET_GPR_U32(ctx, 31, 0x1C4EA8u);
    ctx->pc = 0x1C4EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4EA0u;
    // 0x1c4ea4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4FE0u, 0x1C4EA0u, 0x1C4EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4EA8u;
label_1c4ea8:
    // 0x1c4ea8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c4ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c4eac:
    // 0x1c4eac: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C4EACu;
    SET_GPR_U32(ctx, 31, 0x1C4EB4u);
    ctx->pc = 0x1C4EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4EACu;
    // 0x1c4eb0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C4EACu, 0x1C4EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4EB4u;
label_1c4eb4:
    // 0x1c4eb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4EB4u;
    {
        const bool branch_taken_0x1c4eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EB4u;
        // 0x1c4eb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4eb4) {
            ctx->pc = 0x1C4EC4u;
            goto label_1c4ec4;
        }
    }
    ctx->pc = 0x1C4EBCu;
    // 0x1c4ebc: 0xc0713f8  jal         func_1C4FE0
    ctx->pc = 0x1C4EBCu;
    SET_GPR_U32(ctx, 31, 0x1C4EC4u);
    ctx->pc = 0x1C4EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4EBCu;
    // 0x1c4ec0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4FE0u, 0x1C4EBCu, 0x1C4EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4EC4u;
label_1c4ec4:
    // 0x1c4ec4: 0xc073098  jal         func_1CC260
    ctx->pc = 0x1C4EC4u;
    SET_GPR_U32(ctx, 31, 0x1C4ECCu);
    ctx->pc = 0x1CC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC260u, 0x1C4EC4u, 0x1C4ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4ECCu;
label_1c4ecc:
    // 0x1c4ecc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c4eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c4ed0: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1C4ED0u;
    {
        const bool branch_taken_0x1c4ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4ed0) {
            ctx->pc = 0x1C4FACu;
            goto label_1c4fac;
        }
    }
    ctx->pc = 0x1C4ED8u;
    // 0x1c4ed8: 0x8e65004c  lw          $a1, 0x4C($s3)
    ctx->pc = 0x1c4ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x1c4edc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c4edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4ee0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c4ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4ee4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c4ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4ee8:
    // 0x1c4ee8: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x1c4ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1c4eec: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1c4eecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c4ef0: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4EF0u;
    {
        const bool branch_taken_0x1c4ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C4EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EF0u;
        // 0x1c4ef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ef0) {
            ctx->pc = 0x1C4EFCu;
            goto label_1c4efc;
        }
    }
    ctx->pc = 0x1C4EF8u;
    // 0x1c4ef8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c4ef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c4efc:
    // 0x1c4efc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4EFCu;
    {
        const bool branch_taken_0x1c4efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4efc) {
            ctx->pc = 0x1C4F0Cu;
            goto label_1c4f0c;
        }
    }
    ctx->pc = 0x1C4F04u;
    // 0x1c4f04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4F04u;
    {
        const bool branch_taken_0x1c4f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F04u;
        // 0x1c4f08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f04) {
            ctx->pc = 0x1C4F20u;
            goto label_1c4f20;
        }
    }
    ctx->pc = 0x1C4F0Cu;
label_1c4f0c:
    // 0x1c4f0c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c4f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c4f10: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x1c4f10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1c4f14: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1C4F14u;
    {
        const bool branch_taken_0x1c4f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F14u;
        // 0x1c4f18: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f14) {
            ctx->pc = 0x1C4EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4ee8;
        }
    }
    ctx->pc = 0x1C4F1Cu;
    // 0x1c4f1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c4f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4f20:
    // 0x1c4f20: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4F20u;
    {
        const bool branch_taken_0x1c4f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4f20) {
            ctx->pc = 0x1C4F2Cu;
            goto label_1c4f2c;
        }
    }
    ctx->pc = 0x1C4F28u;
    // 0x1c4f28: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x1c4f28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_1c4f2c:
    // 0x1c4f2c: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x1c4f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x1c4f30: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1c4f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1c4f34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c4f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4f38: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c4f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c4f3c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1c4f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c4f40: 0xae620074  sw          $v0, 0x74($s3)
    ctx->pc = 0x1c4f40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
    // 0x1c4f44: 0xc420c394  lwc1        $f0, -0x3C6C($at)
    ctx->pc = 0x1c4f44u;
    { uint32_t bits = FAST_READ32(0x22C394u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4f48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c4f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c4f4c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c4f4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c4f50: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1c4f50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c4f54: 0x0  nop
    ctx->pc = 0x1c4f54u;
    // NOP
    // 0x1c4f58: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4F58u;
    {
        const bool branch_taken_0x1c4f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4f58) {
            ctx->pc = 0x1C4F64u;
            goto label_1c4f64;
        }
    }
    ctx->pc = 0x1C4F60u;
    // 0x1c4f60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c4f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c4f64:
    // 0x1c4f64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4f68: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x1c4f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x1c4f6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c4f6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c4f70: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1c4f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1c4f74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c4f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4f78: 0x0  nop
    ctx->pc = 0x1c4f78u;
    // NOP
    // 0x1c4f7c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c4f7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c4f80: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c4f80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c4f84: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1c4f84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c4f88: 0x0  nop
    ctx->pc = 0x1c4f88u;
    // NOP
    // 0x1c4f8c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1c4f8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c4f90: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4F90u;
    {
        const bool branch_taken_0x1c4f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F90u;
        // 0x1c4f94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f90) {
            ctx->pc = 0x1C4FB4u;
            goto label_1c4fb4;
        }
    }
    ctx->pc = 0x1C4F98u;
    // 0x1c4f98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c4f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4f9c: 0xc0713f8  jal         func_1C4FE0
    ctx->pc = 0x1C4F9Cu;
    SET_GPR_U32(ctx, 31, 0x1C4FA4u);
    ctx->pc = 0x1C4FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4F9Cu;
    // 0x1c4fa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4FE0u, 0x1C4F9Cu, 0x1C4FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4FA4u;
label_1c4fa4:
    // 0x1c4fa4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4FA4u;
    {
        const bool branch_taken_0x1c4fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FA4u;
        // 0x1c4fa8: 0xae600074  sw          $zero, 0x74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4fa4) {
            ctx->pc = 0x1C4FB0u;
            goto label_1c4fb0;
        }
    }
    ctx->pc = 0x1C4FACu;
label_1c4fac:
    // 0x1c4fac: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x1c4facu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
label_1c4fb0:
    // 0x1c4fb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c4fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c4fb4:
    // 0x1c4fb4: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1C4FB4u;
    SET_GPR_U32(ctx, 31, 0x1C4FBCu);
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1C4FB4u, 0x1C4FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4FBCu;
label_1c4fbc:
    // 0x1c4fbc: 0xc0714f4  jal         func_1C53D0
    ctx->pc = 0x1C4FBCu;
    SET_GPR_U32(ctx, 31, 0x1C4FC4u);
    ctx->pc = 0x1C4FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4FBCu;
    // 0x1c4fc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C53D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C53D0u, 0x1C4FBCu, 0x1C4FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4FC4u;
label_1c4fc4:
    // 0x1c4fc4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c4fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c4fc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c4fc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4fcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c4fccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4fd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c4fd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4fd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c4fd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FD8u;
        // 0x1c4fdc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4FE0u;
}
