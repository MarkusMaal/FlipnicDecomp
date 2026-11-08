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

// Function: entry_001cb4b0
// Address: 0x1cb4b0 - 0x1cb57c
void entry_001cb4b0_0x1cb4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb4b0_0x1cb4b0");
#endif

    switch (ctx->pc) {
        case 0x1cb4b8u: goto label_1cb4b8;
        case 0x1cb4c4u: goto label_1cb4c4;
        case 0x1cb4d0u: goto label_1cb4d0;
        case 0x1cb4dcu: goto label_1cb4dc;
        default: break;
    }

    ctx->pc = 0x1cb4b0u;

    // 0x1cb4b0: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1CB4B0u;
    SET_GPR_U32(ctx, 31, 0x1CB4B8u);
    ctx->pc = 0x1CB4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB4B0u;
    // 0x1cb4b4: 0xae220098  sw          $v0, 0x98($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1CB4B0u, 0x1CB4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB4B8u;
label_1cb4b8:
    // 0x1cb4b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cb4b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb4bc: 0xc062944  jal         func_18A510
    ctx->pc = 0x1CB4BCu;
    SET_GPR_U32(ctx, 31, 0x1CB4C4u);
    ctx->pc = 0x1CB4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB4BCu;
    // 0x1cb4c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A510u, 0x1CB4BCu, 0x1CB4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB4C4u;
label_1cb4c4:
    // 0x1cb4c4: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x1cb4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
    // 0x1cb4c8: 0xc062990  jal         func_18A640
    ctx->pc = 0x1CB4C8u;
    SET_GPR_U32(ctx, 31, 0x1CB4D0u);
    ctx->pc = 0x1CB4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB4C8u;
    // 0x1cb4cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A640u, 0x1CB4C8u, 0x1CB4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB4D0u;
label_1cb4d0:
    // 0x1cb4d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb4d4: 0xc0629b8  jal         func_18A6E0
    ctx->pc = 0x1CB4D4u;
    SET_GPR_U32(ctx, 31, 0x1CB4DCu);
    ctx->pc = 0x1CB4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB4D4u;
    // 0x1cb4d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A6E0u, 0x1CB4D4u, 0x1CB4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB4DCu;
label_1cb4dc:
    // 0x1cb4dc: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cb4dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cb4e0: 0x3c0342fe  lui         $v1, 0x42FE
    ctx->pc = 0x1cb4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17150 << 16));
    // 0x1cb4e4: 0x9024c7f4  lbu         $a0, -0x380C($at)
    ctx->pc = 0x1cb4e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x22C7F4u));
    // 0x1cb4e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cb4e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb4ec: 0xae24007c  sw          $a0, 0x7C($s1)
    ctx->pc = 0x1cb4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 4));
    // 0x1cb4f0: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x1cb4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1cb4f4: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x1cb4f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1cb4f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cb4f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb4fc: 0x0  nop
    ctx->pc = 0x1cb4fcu;
    // NOP
    // 0x1cb500: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cb500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cb504: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1cb504u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1cb508: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cb508u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1cb50c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1cb50cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1cb510: 0x0  nop
    ctx->pc = 0x1cb510u;
    // NOP
    // 0x1cb514: 0xae23006c  sw          $v1, 0x6C($s1)
    ctx->pc = 0x1cb514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
    // 0x1cb518: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x1cb518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x1cb51c: 0x70621818  mult1       $v1, $v1, $v0
    ctx->pc = 0x1cb51cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1cb520: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cb520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb524: 0x0  nop
    ctx->pc = 0x1cb524u;
    // NOP
    // 0x1cb528: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cb528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cb52c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1cb52cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1cb530: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cb530u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1cb534: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1cb534u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1cb538: 0x0  nop
    ctx->pc = 0x1cb538u;
    // NOP
    // 0x1cb53c: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x1cb53cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
    // 0x1cb540: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x1cb540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x1cb544: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x1cb544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
    // 0x1cb548: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x1cb548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1cb54c: 0xae230084  sw          $v1, 0x84($s1)
    ctx->pc = 0x1cb54cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
    // 0x1cb550: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x1cb550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x1cb554: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x1cb554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
    // 0x1cb558: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x1cb558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1cb55c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB55Cu;
    {
        const bool branch_taken_0x1cb55c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB55Cu;
        // 0x1cb560: 0xae23008c  sw          $v1, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb55c) {
            ctx->pc = 0x1CB57Cu;
            return;
        }
    }
    ctx->pc = 0x1CB564u;
    // 0x1cb564: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x1cb564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1cb568: 0x12030004  beq         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB568u;
    {
        const bool branch_taken_0x1cb568 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cb568) {
            ctx->pc = 0x1CB57Cu;
            return;
        }
    }
    ctx->pc = 0x1CB570u;
    // 0x1cb570: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x1cb570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x1cb574: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cb574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cb578: 0xae23006c  sw          $v1, 0x6C($s1)
    ctx->pc = 0x1cb578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
    ctx->pc = 0x1cb57cu;
}
