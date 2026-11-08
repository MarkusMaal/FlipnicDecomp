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

// Function: entry_001472a8
// Address: 0x1472a8 - 0x147380
void entry_001472a8_0x1472a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001472a8_0x1472a8");
#endif

    switch (ctx->pc) {
        case 0x1472d0u: goto label_1472d0;
        case 0x147310u: goto label_147310;
        case 0x147358u: goto label_147358;
        default: break;
    }

    ctx->pc = 0x1472a8u;

label_1472a8:
    // 0x1472a8: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x1472a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1472ac: 0x26920018  addiu       $s2, $s4, 0x18
    ctx->pc = 0x1472acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x1472b0: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x1472b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1472b4: 0x203a821  addu        $s5, $s0, $v1
    ctx->pc = 0x1472b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1472b8: 0x2a2001b  divu        $zero, $s5, $v0
    ctx->pc = 0x1472b8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
    // 0x1472bc: 0x0  nop
    ctx->pc = 0x1472bcu;
    // NOP
    // 0x1472c0: 0x0  nop
    ctx->pc = 0x1472c0u;
    // NOP
    // 0x1472c4: 0x2812  mflo        $a1
    ctx->pc = 0x1472c4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1472c8: 0xc04fc44  jal         func_13F110
    ctx->pc = 0x1472C8u;
    SET_GPR_U32(ctx, 31, 0x1472D0u);
    ctx->pc = 0x1472CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1472C8u;
    // 0x1472cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F110u, 0x1472C8u, 0x1472D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1472D0u;
label_1472d0:
    // 0x1472d0: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x1472d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1472d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1472d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1472d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1472d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1472dc: 0x2a5001b  divu        $zero, $s5, $a1
    ctx->pc = 0x1472dcu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
    // 0x1472e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1472e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1472e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1472e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1472e8: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x1472e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1472ec: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x1472ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1472f0: 0x1010  mfhi        $v0
    ctx->pc = 0x1472f0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1472f4: 0x245001b  divu        $zero, $s2, $a1
    ctx->pc = 0x1472f4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
    // 0x1472f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1472f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1472fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1472fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x147300: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x147300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147304: 0x2812  mflo        $a1
    ctx->pc = 0x147304u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x147308: 0xc04fc44  jal         func_13F110
    ctx->pc = 0x147308u;
    SET_GPR_U32(ctx, 31, 0x147310u);
    ctx->pc = 0x14730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147308u;
    // 0x14730c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F110u, 0x147308u, 0x147310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147310u;
label_147310:
    // 0x147310: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x147310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x147314: 0x114100  sll         $t0, $s1, 4
    ctx->pc = 0x147314u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x147318: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x147318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14731c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14731cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x147320: 0x2e83021  addu        $a2, $s7, $t0
    ctx->pc = 0x147320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 8)));
    // 0x147324: 0x2c83821  addu        $a3, $s6, $t0
    ctx->pc = 0x147324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 8)));
    // 0x147328: 0x245001b  divu        $zero, $s2, $a1
    ctx->pc = 0x147328u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
    // 0x14732c: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x14732cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147330: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x147330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x147334: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x147334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x147338: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x147338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x14733c: 0x482821  addu        $a1, $v0, $t0
    ctx->pc = 0x14733cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x147340: 0x1010  mfhi        $v0
    ctx->pc = 0x147340u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x147344: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x147344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x147348: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x147348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14734c: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x14734cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x147350: 0xc061b3c  jal         func_186CF0
    ctx->pc = 0x147350u;
    SET_GPR_U32(ctx, 31, 0x147358u);
    ctx->pc = 0x147354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147350u;
    // 0x147354: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186CF0u, 0x147350u, 0x147358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147358u;
label_147358:
    // 0x147358: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x147358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14735c: 0x2e020032  sltiu       $v0, $s0, 0x32
    ctx->pc = 0x14735cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x147360: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x147360u;
    {
        const bool branch_taken_0x147360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147360u;
        // 0x147364: 0x26310064  addiu       $s1, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147360) {
            ctx->pc = 0x1472A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1472a8;
        }
    }
    ctx->pc = 0x147368u;
    // 0x147368: 0x27e082a  slt         $at, $s3, $fp
    ctx->pc = 0x147368u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x14736c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x14736Cu;
    {
        const bool branch_taken_0x14736c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x147370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14736Cu;
        // 0x147370: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14736c) {
            ctx->pc = 0x147380u;
            return;
        }
    }
    ctx->pc = 0x147374u;
    // 0x147374: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x147374u;
    {
        const bool branch_taken_0x147374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147374u;
        // 0x147378: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147374) {
            ctx->pc = 0x147380u;
            return;
        }
    }
    ctx->pc = 0x14737Cu;
    // 0x14737c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x14737cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x147380u;
}
