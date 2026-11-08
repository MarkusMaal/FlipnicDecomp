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

// Function: FUN_001901e0
// Address: 0x1901e0 - 0x190498
void FUN_001901e0_0x1901e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001901e0_0x1901e0");
#endif

    switch (ctx->pc) {
        case 0x19020cu: goto label_19020c;
        case 0x19021cu: goto label_19021c;
        case 0x190238u: goto label_190238;
        case 0x190298u: goto label_190298;
        case 0x1902dcu: goto label_1902dc;
        case 0x190330u: goto label_190330;
        case 0x190344u: goto label_190344;
        case 0x190358u: goto label_190358;
        case 0x190410u: goto label_190410;
        case 0x190424u: goto label_190424;
        case 0x190440u: goto label_190440;
        case 0x190468u: goto label_190468;
        case 0x190474u: goto label_190474;
        default: break;
    }

    ctx->pc = 0x1901e0u;

    // 0x1901e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1901e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1901e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1901e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1901e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1901e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1901ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1901ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1901f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1901f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1901f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1901f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1901f8: 0x24040460  addiu       $a0, $zero, 0x460
    ctx->pc = 0x1901f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1120));
    // 0x1901fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1901fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x190200: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x190200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x190204: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x190204u;
    SET_GPR_U32(ctx, 31, 0x19020Cu);
    ctx->pc = 0x190208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190204u;
    // 0x190208: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x190204u, 0x19020Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19020Cu;
label_19020c:
    // 0x19020c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19020Cu;
    {
        const bool branch_taken_0x19020c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19020c) {
            ctx->pc = 0x19021Cu;
            goto label_19021c;
        }
    }
    ctx->pc = 0x190214u;
    // 0x190214: 0xc06422c  jal         func_1908B0
    ctx->pc = 0x190214u;
    SET_GPR_U32(ctx, 31, 0x19021Cu);
    ctx->pc = 0x190218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190214u;
    // 0x190218: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1908B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1908B0u, 0x190214u, 0x19021Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19021Cu;
label_19021c:
    // 0x19021c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19021cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x190220: 0xaf828704  sw          $v0, -0x78FC($gp)
    ctx->pc = 0x190220u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936324), GPR_U32(ctx, 2));
    // 0x190224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190228: 0x24a5fdd8  addiu       $a1, $a1, -0x228
    ctx->pc = 0x190228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966744));
    // 0x19022c: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x19022cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
    // 0x190230: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x190230u;
    SET_GPR_U32(ctx, 31, 0x190238u);
    ctx->pc = 0x190234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190230u;
    // 0x190234: 0xaf8086f8  sw          $zero, -0x7908($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936312), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x190230u, 0x190238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190238u;
label_190238:
    // 0x190238: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x190238u;
    {
        const bool branch_taken_0x190238 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x190238) {
            ctx->pc = 0x190248u;
            goto label_190248;
        }
    }
    ctx->pc = 0x190240u;
    // 0x190240: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x190240u;
    {
        const bool branch_taken_0x190240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190240u;
        // 0x190244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190240) {
            ctx->pc = 0x190478u;
            goto label_190478;
        }
    }
    ctx->pc = 0x190248u;
label_190248:
    // 0x190248: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x190248u;
    {
        const bool branch_taken_0x190248 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190248u;
        // 0x19024c: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190248) {
            ctx->pc = 0x190258u;
            goto label_190258;
        }
    }
    ctx->pc = 0x190250u;
    // 0x190250: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x190250u;
    {
        const bool branch_taken_0x190250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190250) {
            ctx->pc = 0x190270u;
            goto label_190270;
        }
    }
    ctx->pc = 0x190258u;
label_190258:
    // 0x190258: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x190258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19025c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x19025cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x190260: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x190260u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x190264: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x190264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x190268: 0x84710008  lh          $s1, 0x8($v1)
    ctx->pc = 0x190268u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x19026c: 0x0  nop
    ctx->pc = 0x19026cu;
    // NOP
label_190270:
    // 0x190270: 0x1e200003  bgtz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x190270u;
    {
        const bool branch_taken_0x190270 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x190274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190270u;
        // 0x190274: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190270) {
            ctx->pc = 0x190280u;
            goto label_190280;
        }
    }
    ctx->pc = 0x190278u;
    // 0x190278: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x190278u;
    {
        const bool branch_taken_0x190278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190278u;
        // 0x19027c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190278) {
            ctx->pc = 0x190478u;
            goto label_190478;
        }
    }
    ctx->pc = 0x190280u;
label_190280:
    // 0x190280: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x190280u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x190284: 0x7c20d6e0  sq          $zero, -0x2920($at)
    ctx->pc = 0x190284u;
    WRITE128(ADD32(GPR_U32(ctx, 1), 4294956768), GPR_VEC(ctx, 0));
    // 0x190288: 0x2508d6e0  addiu       $t0, $t0, -0x2920
    ctx->pc = 0x190288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956768));
    // 0x19028c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19028cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190290: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x190290u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x190294: 0x24c6fde0  addiu       $a2, $a2, -0x220
    ctx->pc = 0x190294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966752));
label_190298:
    // 0x190298: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x190298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x19029c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x19029cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1902a0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1902A0u;
    {
        const bool branch_taken_0x1902a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1902a0) {
            ctx->pc = 0x1902C0u;
            goto label_1902c0;
        }
    }
    ctx->pc = 0x1902A8u;
    // 0x1902a8: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x1902a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1902ac: 0x1072021  addu        $a0, $t0, $a3
    ctx->pc = 0x1902acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1902b0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1902b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1902b4: 0x28e30010  slti        $v1, $a3, 0x10
    ctx->pc = 0x1902b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1902b8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1902B8u;
    {
        const bool branch_taken_0x1902b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1902BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1902B8u;
        // 0x1902bc: 0xa0850000  sb          $a1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1902b8) {
            ctx->pc = 0x190298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190298;
        }
    }
    ctx->pc = 0x1902C0u;
label_1902c0:
    // 0x1902c0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1902c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1902c4: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1902c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x1902c8: 0x7c20d6f0  sq          $zero, -0x2910($at)
    ctx->pc = 0x1902c8u;
    do { __m128i _value = (GPR_VEC(ctx, 0)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x36D6F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x36D6F0u, _value); } while (0);
    // 0x1902cc: 0x2508d6f0  addiu       $t0, $t0, -0x2910
    ctx->pc = 0x1902ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956784));
    // 0x1902d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1902d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1902d4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1902d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1902d8: 0x24c6fde8  addiu       $a2, $a2, -0x218
    ctx->pc = 0x1902d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966760));
label_1902dc:
    // 0x1902dc: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x1902dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1902e0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1902e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1902e4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1902E4u;
    {
        const bool branch_taken_0x1902e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1902e4) {
            ctx->pc = 0x190304u;
            goto label_190304;
        }
    }
    ctx->pc = 0x1902ECu;
    // 0x1902ec: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x1902ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1902f0: 0x1072021  addu        $a0, $t0, $a3
    ctx->pc = 0x1902f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1902f4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1902f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1902f8: 0x28e30010  slti        $v1, $a3, 0x10
    ctx->pc = 0x1902f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1902fc: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1902FCu;
    {
        const bool branch_taken_0x1902fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1902FCu;
        // 0x190300: 0xa0850000  sb          $a1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1902fc) {
            ctx->pc = 0x1902DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1902dc;
        }
    }
    ctx->pc = 0x190304u;
label_190304:
    // 0x190304: 0x0  nop
    ctx->pc = 0x190304u;
    // NOP
    // 0x190308: 0xaf9086f4  sw          $s0, -0x790C($gp)
    ctx->pc = 0x190308u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936308), GPR_U32(ctx, 16));
    // 0x19030c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19030cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x190310: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x190310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x190314: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x190314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x190318: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x190318u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x19031c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19031cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x190320: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x190320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190324: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x190324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x190328: 0x1020004d  beqz        $at, . + 4 + (0x4D << 2)
    ctx->pc = 0x190328u;
    {
        const bool branch_taken_0x190328 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190328u;
        // 0x19032c: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190328) {
            ctx->pc = 0x190460u;
            goto label_190460;
        }
    }
    ctx->pc = 0x190330u;
label_190330:
    // 0x190330: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x190330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x190334: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x190334u;
    {
        const bool branch_taken_0x190334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190334u;
        // 0x190338: 0x24040670  addiu       $a0, $zero, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190334) {
            ctx->pc = 0x190448u;
            goto label_190448;
        }
    }
    ctx->pc = 0x19033Cu;
    // 0x19033c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x19033Cu;
    SET_GPR_U32(ctx, 31, 0x190344u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x19033Cu, 0x190344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190344u;
label_190344:
    // 0x190344: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x190344u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190348: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x190348u;
    {
        const bool branch_taken_0x190348 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x19034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190348u;
        // 0x19034c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190348) {
            ctx->pc = 0x19035Cu;
            goto label_19035c;
        }
    }
    ctx->pc = 0x190350u;
    // 0x190350: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x190350u;
    SET_GPR_U32(ctx, 31, 0x190358u);
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x190350u, 0x190358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190358u;
label_190358:
    // 0x190358: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x190358u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19035c:
    // 0x19035c: 0x0  nop
    ctx->pc = 0x19035cu;
    // NOP
    // 0x190360: 0x1260003a  beqz        $s3, . + 4 + (0x3A << 2)
    ctx->pc = 0x190360u;
    {
        const bool branch_taken_0x190360 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x190364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190360u;
        // 0x190364: 0x3c040021  lui         $a0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190360) {
            ctx->pc = 0x19044Cu;
            goto label_19044c;
        }
    }
    ctx->pc = 0x190368u;
    // 0x190368: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x190368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19036c: 0x24842940  addiu       $a0, $a0, 0x2940
    ctx->pc = 0x19036cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10560));
    // 0x190370: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x190370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x190374: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x190374u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x190378: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x190378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19037c: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x19037cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x190380: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x190380u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x190384: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x190384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190388: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x190388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x19038c: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x19038cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x190390: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x190390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x190394: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x190394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x190398: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x190398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x19039c: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x19039cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1903a0: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1903a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1903a4: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x1903a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x1903a8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1903a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1903ac: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1903acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1903b0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1903b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1903b4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1903b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1903b8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1903b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1903bc: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1903bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1903c0: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x1903c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1903c4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1903c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1903c8: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x1903c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x1903cc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1903ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1903d0: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1903d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1903d4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1903d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1903d8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1903d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1903dc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1903dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1903e0: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1903e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1903e4: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x1903e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1903e8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1903e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1903ec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1903ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1903f0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1903f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1903f4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1903f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1903f8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1903f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1903fc: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1903fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x190400: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x190400u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x190404: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x190404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x190408: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x190408u;
    SET_GPR_U32(ctx, 31, 0x190410u);
    ctx->pc = 0x19040Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190408u;
    // 0x19040c: 0xac530280  sw          $s3, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x190408u, 0x190410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190410u;
label_190410:
    // 0x190410: 0x8f828704  lw          $v0, -0x78FC($gp)
    ctx->pc = 0x190410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x190414: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x190414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190418: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x190418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19041c: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x19041Cu;
    SET_GPR_U32(ctx, 31, 0x190424u);
    ctx->pc = 0x190420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19041Cu;
    // 0x190420: 0x24440210  addiu       $a0, $v0, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x19041Cu, 0x190424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190424u;
label_190424:
    // 0x190424: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x190424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x190428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19042c: 0xae720664  sw          $s2, 0x664($s3)
    ctx->pc = 0x19042cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1636), GPR_U32(ctx, 18));
    // 0x190430: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x190430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190434: 0xae720668  sw          $s2, 0x668($s3)
    ctx->pc = 0x190434u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1640), GPR_U32(ctx, 18));
    // 0x190438: 0xc06433c  jal         func_190CF0
    ctx->pc = 0x190438u;
    SET_GPR_U32(ctx, 31, 0x190440u);
    ctx->pc = 0x19043Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190438u;
    // 0x19043c: 0xae620660  sw          $v0, 0x660($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 1632), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190CF0u, 0x190438u, 0x190440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190440u;
label_190440:
    // 0x190440: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190440u;
    {
        const bool branch_taken_0x190440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190440) {
            ctx->pc = 0x19044Cu;
            goto label_19044c;
        }
    }
    ctx->pc = 0x190448u;
label_190448:
    // 0x190448: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x190448u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_19044c:
    // 0x19044c: 0x0  nop
    ctx->pc = 0x19044cu;
    // NOP
    // 0x190450: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x190450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x190454: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x190454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x190458: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x190458u;
    {
        const bool branch_taken_0x190458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190458) {
            ctx->pc = 0x190330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190330;
        }
    }
    ctx->pc = 0x190460u;
label_190460:
    // 0x190460: 0xc064128  jal         func_1904A0
    ctx->pc = 0x190460u;
    SET_GPR_U32(ctx, 31, 0x190468u);
    ctx->pc = 0x1904A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1904A0u, 0x190460u, 0x190468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190468u;
label_190468:
    // 0x190468: 0x8f858704  lw          $a1, -0x78FC($gp)
    ctx->pc = 0x190468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x19046c: 0xc057424  jal         func_15D090
    ctx->pc = 0x19046Cu;
    SET_GPR_U32(ctx, 31, 0x190474u);
    ctx->pc = 0x190470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19046Cu;
    // 0x190470: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D090u, 0x19046Cu, 0x190474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190474u;
label_190474:
    // 0x190474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_190478:
    // 0x190478: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x190478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19047c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19047cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x190480: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x190480u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190484: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x190484u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190488: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x190488u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19048c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19048cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190490: 0x3e00008  jr          $ra
    ctx->pc = 0x190490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190490u;
        // 0x190494: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190498u;
}
