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

// Function: entry_001a1544
// Address: 0x1a1544 - 0x1a1604
void entry_001a1544_0x1a1544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1544_0x1a1544");
#endif

    switch (ctx->pc) {
        case 0x1a1554u: goto label_1a1554;
        case 0x1a159cu: goto label_1a159c;
        default: break;
    }

    ctx->pc = 0x1a1544u;

    // 0x1a1544: 0x106001af  beqz        $v1, . + 4 + (0x1AF << 2)
    ctx->pc = 0x1A1544u;
    {
        const bool branch_taken_0x1a1544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1544) {
            ctx->pc = 0x1A1C04u;
            return;
        }
    }
    ctx->pc = 0x1A154Cu;
    // 0x1a154c: 0xc069ae8  jal         func_1A6BA0
    ctx->pc = 0x1A154Cu;
    SET_GPR_U32(ctx, 31, 0x1A1554u);
    ctx->pc = 0x1A1550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A154Cu;
    // 0x1a1550: 0x268408a0  addiu       $a0, $s4, 0x8A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x1A154Cu, 0x1A1554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1554u;
label_1a1554:
    // 0x1a1554: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a1554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1558: 0x3c024188  lui         $v0, 0x4188
    ctx->pc = 0x1a1558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16776 << 16));
    // 0x1a155c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a155cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a1560: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1a1560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a1564: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a1564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a1568: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a1568u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a156c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a156cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a1570: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a1570u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a1574: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a1574u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a1578: 0x0  nop
    ctx->pc = 0x1a1578u;
    // NOP
    // 0x1a157c: 0xae830680  sw          $v1, 0x680($s4)
    ctx->pc = 0x1a157cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1664), GPR_U32(ctx, 3));
    // 0x1a1580: 0xae800684  sw          $zero, 0x684($s4)
    ctx->pc = 0x1a1580u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1668), GPR_U32(ctx, 0));
    // 0x1a1584: 0xae800690  sw          $zero, 0x690($s4)
    ctx->pc = 0x1a1584u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1680), GPR_U32(ctx, 0));
    // 0x1a1588: 0xae80069c  sw          $zero, 0x69C($s4)
    ctx->pc = 0x1a1588u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1692), GPR_U32(ctx, 0));
    // 0x1a158c: 0xae8006a0  sw          $zero, 0x6A0($s4)
    ctx->pc = 0x1a158cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1696), GPR_U32(ctx, 0));
    // 0x1a1590: 0xae800698  sw          $zero, 0x698($s4)
    ctx->pc = 0x1a1590u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1688), GPR_U32(ctx, 0));
    // 0x1a1594: 0xc045ae8  jal         func_116BA0
    ctx->pc = 0x1A1594u;
    SET_GPR_U32(ctx, 31, 0x1A159Cu);
    ctx->pc = 0x1A1598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1594u;
    // 0x1a1598: 0xae8206b0  sw          $v0, 0x6B0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1712), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116BA0u, 0x1A1594u, 0x1A159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A159Cu;
label_1a159c:
    // 0x1a159c: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x1a159cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a15a0: 0x24550023  addiu       $s5, $v0, 0x23
    ctx->pc = 0x1a15a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x1a15a4: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1a15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1a15a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1a15a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1a15ac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a15acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a15b0: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x1a15b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1a15b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a15b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a15b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a15b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a15bc: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x1a15bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1a15c0: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x1a15c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a15c4: 0xae800c70  sw          $zero, 0xC70($s4)
    ctx->pc = 0x1a15c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3184), GPR_U32(ctx, 0));
    // 0x1a15c8: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x1a15c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1a15cc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a15ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1a15d0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a15d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1a15d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a15d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a15d8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1a15d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1a15dc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a15dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a15e0: 0x0  nop
    ctx->pc = 0x1a15e0u;
    // NOP
    // 0x1a15e4: 0x83b023  subu        $s6, $a0, $v1
    ctx->pc = 0x1a15e4u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a15e8: 0x2c2001a  div         $zero, $s6, $v0
    ctx->pc = 0x1a15e8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 22);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a15ec: 0x0  nop
    ctx->pc = 0x1a15ecu;
    // NOP
    // 0x1a15f0: 0x0  nop
    ctx->pc = 0x1a15f0u;
    // NOP
    // 0x1a15f4: 0x8812  mflo        $s1
    ctx->pc = 0x1a15f4u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x1a15f8: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A15F8u;
    {
        const bool branch_taken_0x1a15f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A15FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15F8u;
        // 0x1a15fc: 0xae950c74  sw          $s5, 0xC74($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3188), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a15f8) {
            ctx->pc = 0x1A1654u;
            return;
        }
    }
    ctx->pc = 0x1A1600u;
    // 0x1a1600: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a1600u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a1604u;
}
