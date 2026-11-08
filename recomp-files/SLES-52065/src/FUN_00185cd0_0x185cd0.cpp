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

// Function: FUN_00185cd0
// Address: 0x185cd0 - 0x185ed4
void FUN_00185cd0_0x185cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00185cd0_0x185cd0");
#endif

    switch (ctx->pc) {
        case 0x185df4u: goto label_185df4;
        case 0x185eacu: goto label_185eac;
        default: break;
    }

    ctx->pc = 0x185cd0u;

    // 0x185cd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x185cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x185cd4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x185cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x185cd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x185cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x185cdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x185cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x185ce0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x185ce0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ce4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x185ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x185ce8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x185ce8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185cec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x185cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x185cf0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x185cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185cf4: 0x838286cc  lb          $v0, -0x7934($gp)
    ctx->pc = 0x185cf4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936268)));
    // 0x185cf8: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x185CF8u;
    {
        const bool branch_taken_0x185cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CF8u;
        // 0x185cfc: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185cf8) {
            ctx->pc = 0x185DFCu;
            goto label_185dfc;
        }
    }
    ctx->pc = 0x185D00u;
    // 0x185d00: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185d04: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x185d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x185d08: 0xa0209292  sb          $zero, -0x6D6E($at)
    ctx->pc = 0x185d08u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x369292u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369292u, _value); } while (0);
    // 0x185d0c: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x185d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x185d10: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x185d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x185d14: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185d18: 0xfc2292b8  sd          $v0, -0x6D48($at)
    ctx->pc = 0x185d18u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3692B8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3692B8u, _value); } while (0);
    // 0x185d1c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x185d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x185d20: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x185d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x185d24: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185d28: 0xa0229293  sb          $v0, -0x6D6D($at)
    ctx->pc = 0x185d28u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x369293u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369293u, _value); } while (0);
    // 0x185d2c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x185d2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x185d30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x185d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185d34: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185d38: 0xa4229290  sh          $v0, -0x6D70($at)
    ctx->pc = 0x185d38u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x369290u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369290u, _value); } while (0);
    // 0x185d3c: 0x2409f800  addiu       $t1, $zero, -0x800
    ctx->pc = 0x185d3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x185d40: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185d44: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x185d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x185d48: 0xac209294  sw          $zero, -0x6D6C($at)
    ctx->pc = 0x185d48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x369294u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x369294u, _value); } while (0);
    // 0x185d4c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x185d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x185d50: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185d54: 0x300a07ff  andi        $t2, $zero, 0x7FF
    ctx->pc = 0x185d54u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)2047);
    // 0x185d58: 0xac239298  sw          $v1, -0x6D68($at)
    ctx->pc = 0x185d58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x369298u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x369298u, _value); } while (0);
    // 0x185d5c: 0x24a55ee0  addiu       $a1, $a1, 0x5EE0
    ctx->pc = 0x185d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24288));
    // 0x185d60: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185d64: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x185d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x185d68: 0xac22929c  sw          $v0, -0x6D64($at)
    ctx->pc = 0x185d68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36929Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36929Cu, _value); } while (0);
    // 0x185d6c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x185d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x185d70: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x185d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x185d74: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185d78: 0xfc2292a8  sd          $v0, -0x6D58($at)
    ctx->pc = 0x185d78u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3692A8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3692A8u, _value); } while (0);
    // 0x185d7c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x185d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x185d80: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185d84: 0x24849290  addiu       $a0, $a0, -0x6D70
    ctx->pc = 0x185d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939280));
    // 0x185d88: 0xfc2392a0  sd          $v1, -0x6D60($at)
    ctx->pc = 0x185d88u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3692A0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3692A0u, _value); } while (0);
    // 0x185d8c: 0x24c69280  addiu       $a2, $a2, -0x6D80
    ctx->pc = 0x185d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939264));
    // 0x185d90: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185d94: 0x942892b0  lhu         $t0, -0x6D50($at)
    ctx->pc = 0x185d94u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)FAST_READ16(0x3692B0u));
    // 0x185d98: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185d9c: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x185d9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x185da0: 0x942792b2  lhu         $a3, -0x6D4E($at)
    ctx->pc = 0x185da0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294939314)));
    // 0x185da4: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x185da4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x185da8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185dac: 0xe93824  and         $a3, $a3, $t1
    ctx->pc = 0x185dacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x185db0: 0x942392b4  lhu         $v1, -0x6D4C($at)
    ctx->pc = 0x185db0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294939316)));
    // 0x185db4: 0xea3825  or          $a3, $a3, $t2
    ctx->pc = 0x185db4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x185db8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185dbc: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x185dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x185dc0: 0x942292b6  lhu         $v0, -0x6D4A($at)
    ctx->pc = 0x185dc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294939318)));
    // 0x185dc4: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x185dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x185dc8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185dcc: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x185dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x185dd0: 0xa42892b0  sh          $t0, -0x6D50($at)
    ctx->pc = 0x185dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294939312), (uint16_t)GPR_U32(ctx, 8));
    // 0x185dd4: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x185dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x185dd8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185ddc: 0xa42792b2  sh          $a3, -0x6D4E($at)
    ctx->pc = 0x185ddcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x3692B2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3692B2u, _value); } while (0);
    // 0x185de0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185de4: 0xa42392b4  sh          $v1, -0x6D4C($at)
    ctx->pc = 0x185de4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3692B4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3692B4u, _value); } while (0);
    // 0x185de8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185dec: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x185DECu;
    SET_GPR_U32(ctx, 31, 0x185DF4u);
    ctx->pc = 0x185DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185DECu;
    // 0x185df0: 0xa42292b6  sh          $v0, -0x6D4A($at) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294939318), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x185DECu, 0x185DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185DF4u;
label_185df4:
    // 0x185df4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x185df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185df8: 0xa38286cc  sb          $v0, -0x7934($gp)
    ctx->pc = 0x185df8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936268), (uint8_t)GPR_U32(ctx, 2));
label_185dfc:
    // 0x185dfc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185e00: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x185e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x185e04: 0x942692b0  lhu         $a2, -0x6D50($at)
    ctx->pc = 0x185e04u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x3692B0u));
    // 0x185e08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x185e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x185e0c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x185e0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x185e10: 0x2409f800  addiu       $t1, $zero, -0x800
    ctx->pc = 0x185e10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x185e14: 0x2512018  mult        $a0, $s2, $s1
    ctx->pc = 0x185e14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x185e18: 0x304307ff  andi        $v1, $v0, 0x7FF
    ctx->pc = 0x185e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x185e1c: 0x300707ff  andi        $a3, $zero, 0x7FF
    ctx->pc = 0x185e1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)2047);
    // 0x185e20: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185e24: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x185e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x185e28: 0x942592b2  lhu         $a1, -0x6D4E($at)
    ctx->pc = 0x185e28u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x3692B2u));
    // 0x185e2c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x185e2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x185e30: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x185e30u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x185e34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x185e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x185e38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x185e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x185e3c: 0x308a07ff  andi        $t2, $a0, 0x7FF
    ctx->pc = 0x185e3cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x185e40: 0xc94024  and         $t0, $a2, $t1
    ctx->pc = 0x185e40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x185e44: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x185e44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x185e48: 0x304607ff  andi        $a2, $v0, 0x7FF
    ctx->pc = 0x185e48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x185e4c: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x185e4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x185e50: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185e54: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x185e54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x185e58: 0x942492b4  lhu         $a0, -0x6D4C($at)
    ctx->pc = 0x185e58u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294939316)));
    // 0x185e5c: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x185e5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x185e60: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x185e60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x185e64: 0x24a59290  addiu       $a1, $a1, -0x6D70
    ctx->pc = 0x185e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939280));
    // 0x185e68: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185e6c: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x185e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x185e70: 0x942292b6  lhu         $v0, -0x6D4A($at)
    ctx->pc = 0x185e70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294939318)));
    // 0x185e74: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x185e74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x185e78: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185e7c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x185e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x185e80: 0xa42892b0  sh          $t0, -0x6D50($at)
    ctx->pc = 0x185e80u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294939312), (uint16_t)GPR_U32(ctx, 8));
    // 0x185e84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x185e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x185e88: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185e8c: 0xa42692b2  sh          $a2, -0x6D4E($at)
    ctx->pc = 0x185e8cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3692B2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3692B2u, _value); } while (0);
    // 0x185e90: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185e94: 0xa42492b4  sh          $a0, -0x6D4C($at)
    ctx->pc = 0x185e94u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3692B4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3692B4u, _value); } while (0);
    // 0x185e98: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185e9c: 0xa42292b6  sh          $v0, -0x6D4A($at)
    ctx->pc = 0x185e9cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3692B6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3692B6u, _value); } while (0);
    // 0x185ea0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x185ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x185ea4: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x185EA4u;
    SET_GPR_U32(ctx, 31, 0x185EACu);
    ctx->pc = 0x185EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185EA4u;
    // 0x185ea8: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x185EA4u, 0x185EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185EACu;
label_185eac:
    // 0x185eac: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x185eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x185eb0: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x185eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x185eb4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x185eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x185eb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x185eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185ebc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x185ebcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185ec0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x185ec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185ec4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185ec8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x185ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x185ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185ECCu;
        // 0x185ed0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185ED4u;
}
