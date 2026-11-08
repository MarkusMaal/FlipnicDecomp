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

// Function: FUN_0021b748
// Address: 0x21b748 - 0x21b928
void FUN_0021b748_0x21b748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021b748_0x21b748");
#endif

    switch (ctx->pc) {
        case 0x21b780u: goto label_21b780;
        case 0x21b7b4u: goto label_21b7b4;
        case 0x21b7d0u: goto label_21b7d0;
        case 0x21b830u: goto label_21b830;
        case 0x21b8bcu: goto label_21b8bc;
        case 0x21b8e0u: goto label_21b8e0;
        default: break;
    }

    ctx->pc = 0x21b748u;

    // 0x21b748: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x21b748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x21b74c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21b74cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b750: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x21b750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x21b754: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x21b754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x21b758: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x21b758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x21b75c: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x21b75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x21b760: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x21b760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x21b764: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x21b764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x21b768: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x21b768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x21b76c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x21b76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x21b770: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x21b770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x21b774: 0x3c118007  lui         $s1, 0x8007
    ctx->pc = 0x21b774u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32775 << 16));
    // 0x21b778: 0x3c128007  lui         $s2, 0x8007
    ctx->pc = 0x21b778u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32775 << 16));
    // 0x21b77c: 0x0  nop
    ctx->pc = 0x21b77cu;
    // NOP
label_21b780:
    // 0x21b780: 0x8e226700  lw          $v0, 0x6700($s1)
    ctx->pc = 0x21b780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
    // 0x21b784: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x21b784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21b788: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21B788u;
    {
        const bool branch_taken_0x21b788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B788u;
        // 0x21b78c: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b788) {
            ctx->pc = 0x21B7B4u;
            goto label_21b7b4;
        }
    }
    ctx->pc = 0x21B790u;
    // 0x21b790: 0x26446740  addiu       $a0, $s2, 0x6740
    ctx->pc = 0x21b790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 26432));
    // 0x21b794: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x21b794u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21b798: 0x96456740  lhu         $a1, 0x6740($s2)
    ctx->pc = 0x21b798u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26432)));
    // 0x21b79c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21b7a0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x21b7a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21b7a4: 0x10a2fff6  beq         $a1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x21B7A4u;
    {
        const bool branch_taken_0x21b7a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x21B7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7A4u;
        // 0x21b7a8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b7a4) {
            ctx->pc = 0x21B780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b780;
        }
    }
    ctx->pc = 0x21B7ACu;
    // 0x21b7ac: 0xc01d918  jal         func_076460
    ctx->pc = 0x21B7ACu;
    SET_GPR_U32(ctx, 31, 0x21B7B4u);
    ctx->pc = 0x21B7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B7ACu;
    // 0x21b7b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76460u, 0x21B7ACu, 0x21B7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B7B4u;
label_21b7b4:
    // 0x21b7b4: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x21b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
    // 0x21b7b8: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x21b7b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b7bc: 0x24546740  addiu       $s4, $v0, 0x6740
    ctx->pc = 0x21b7bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 26432));
    // 0x21b7c0: 0x24130014  addiu       $s3, $zero, 0x14
    ctx->pc = 0x21b7c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x21b7c4: 0x3c158007  lui         $s5, 0x8007
    ctx->pc = 0x21b7c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32775 << 16));
    // 0x21b7c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21B7C8u;
    {
        const bool branch_taken_0x21b7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7C8u;
        // 0x21b7cc: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b7c8) {
            ctx->pc = 0x21B7DCu;
            goto label_21b7dc;
        }
    }
    ctx->pc = 0x21B7D0u;
label_21b7d0:
    // 0x21b7d0: 0x96426740  lhu         $v0, 0x6740($s2)
    ctx->pc = 0x21b7d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26432)));
    // 0x21b7d4: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x21B7D4u;
    {
        const bool branch_taken_0x21b7d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7D4u;
        // 0x21b7d8: 0x8e226700  lw          $v0, 0x6700($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b7d4) {
            ctx->pc = 0x21B8D0u;
            goto label_21b8d0;
        }
    }
    ctx->pc = 0x21B7DCu;
label_21b7dc:
    // 0x21b7dc: 0x8ec26700  lw          $v0, 0x6700($s6)
    ctx->pc = 0x21b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 26368)));
    // 0x21b7e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21b7e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b7e4: 0x26466740  addiu       $a2, $s2, 0x6740
    ctx->pc = 0x21b7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 26432));
    // 0x21b7e8: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x21b7e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x21b7ec: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x21b7ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x21b7f0: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x21b7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x21b7f4: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x21b7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x21b7f8: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x21b7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x21b7fc: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x21b7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21b800: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x21b800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21b804: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x21b804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21b808: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x21b808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21b80c: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x21b80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x21b810: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21b810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21b814: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x21B814u;
    {
        const bool branch_taken_0x21b814 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21B818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B814u;
        // 0x21b818: 0xaec26700  sw          $v0, 0x6700($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 26368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b814) {
            ctx->pc = 0x21B880u;
            goto label_21b880;
        }
    }
    ctx->pc = 0x21B81Cu;
    // 0x21b81c: 0x8e296700  lw          $t1, 0x6700($s1)
    ctx->pc = 0x21b81cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
    // 0x21b820: 0x8faa0010  lw          $t2, 0x10($sp)
    ctx->pc = 0x21b820u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b824: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x21b824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21b828: 0x97a70000  lhu         $a3, 0x0($sp)
    ctx->pc = 0x21b828u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b82c: 0x0  nop
    ctx->pc = 0x21b82cu;
    // NOP
label_21b830:
    // 0x21b830: 0x1131818  mult        $v1, $t0, $s3
    ctx->pc = 0x21b830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21b834: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x21b834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21b838: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x21b838u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b83c: 0x742821  addu        $a1, $v1, $s4
    ctx->pc = 0x21b83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x21b840: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x21b840u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21b844: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x21b844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x21b848: 0x688b0007  ldl         $t3, 0x7($a0)
    ctx->pc = 0x21b848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x21b84c: 0x6c8b0000  ldr         $t3, 0x0($a0)
    ctx->pc = 0x21b84cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x21b850: 0x688c000f  ldl         $t4, 0xF($a0)
    ctx->pc = 0x21b850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x21b854: 0x6c8c0008  ldr         $t4, 0x8($a0)
    ctx->pc = 0x21b854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x21b858: 0x8c8d0010  lw          $t5, 0x10($a0)
    ctx->pc = 0x21b858u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x21b85c: 0xb0ab0007  sdl         $t3, 0x7($a1)
    ctx->pc = 0x21b85cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21b860: 0xb4ab0000  sdr         $t3, 0x0($a1)
    ctx->pc = 0x21b860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21b864: 0xb0ac000f  sdl         $t4, 0xF($a1)
    ctx->pc = 0x21b864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21b868: 0xb4ac0008  sdr         $t4, 0x8($a1)
    ctx->pc = 0x21b868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21b86c: 0x109182a  slt         $v1, $t0, $t1
    ctx->pc = 0x21b86cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x21b870: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x21B870u;
    {
        const bool branch_taken_0x21b870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B870u;
        // 0x21b874: 0xacad0010  sw          $t5, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b870) {
            ctx->pc = 0x21B830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b830;
        }
    }
    ctx->pc = 0x21B878u;
    // 0x21b878: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21B878u;
    {
        const bool branch_taken_0x21b878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b878) {
            ctx->pc = 0x21B88Cu;
            goto label_21b88c;
        }
    }
    ctx->pc = 0x21B880u;
label_21b880:
    // 0x21b880: 0x8faa0010  lw          $t2, 0x10($sp)
    ctx->pc = 0x21b880u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b884: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x21b884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21b888: 0x97a70000  lhu         $a3, 0x0($sp)
    ctx->pc = 0x21b888u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_21b88c:
    // 0x21b88c: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x21b88cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b890: 0x140e02d  daddu       $gp, $t2, $zero
    ctx->pc = 0x21b890u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b894: 0xdea36708  ld          $v1, 0x6708($s5)
    ctx->pc = 0x21b894u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 26376)));
    // 0x21b898: 0xd71014  dsllv       $v0, $s7, $a2
    ctx->pc = 0x21b898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x21b89c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21b89cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x21b8a0: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x21b8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x21b8a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x21b8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21b8a8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x21b8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21b8ac: 0x8fa8000c  lw          $t0, 0xC($sp)
    ctx->pc = 0x21b8acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x21b8b0: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x21b8b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x21b8b4: 0xc01d9a0  jal         func_076680
    ctx->pc = 0x21B8B4u;
    SET_GPR_U32(ctx, 31, 0x21B8BCu);
    ctx->pc = 0x21B8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B8B4u;
    // 0x21b8b8: 0xfea36708  sd          $v1, 0x6708($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 26376), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76680u, 0x21B8B4u, 0x21B8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B8BCu;
label_21b8bc:
    // 0x21b8bc: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x21b8bcu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b8c0: 0x8e226700  lw          $v0, 0x6700($s1)
    ctx->pc = 0x21b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
    // 0x21b8c4: 0x1c40ffc2  bgtz        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x21B8C4u;
    {
        const bool branch_taken_0x21b8c4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x21B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8C4u;
        // 0x21b8c8: 0x97a30000  lhu         $v1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b8c4) {
            ctx->pc = 0x21B7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b7d0;
        }
    }
    ctx->pc = 0x21B8CCu;
    // 0x21b8cc: 0x8e226700  lw          $v0, 0x6700($s1)
    ctx->pc = 0x21b8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
label_21b8d0:
    // 0x21b8d0: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21B8D0u;
    {
        const bool branch_taken_0x21b8d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8D0u;
        // 0x21b8d4: 0x24030483  addiu       $v1, $zero, 0x483 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b8d0) {
            ctx->pc = 0x21B8E8u;
            goto label_21b8e8;
        }
    }
    ctx->pc = 0x21B8D8u;
    // 0x21b8d8: 0xc01d918  jal         func_076460
    ctx->pc = 0x21B8D8u;
    SET_GPR_U32(ctx, 31, 0x21B8E0u);
    ctx->pc = 0x21B8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B8D8u;
    // 0x21b8dc: 0x96446740  lhu         $a0, 0x6740($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76460u, 0x21B8D8u, 0x21B8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B8E0u;
label_21b8e0:
    // 0x21b8e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21B8E0u;
    {
        const bool branch_taken_0x21b8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b8e0) {
            ctx->pc = 0x21B8F4u;
            goto label_21b8f4;
        }
    }
    ctx->pc = 0x21B8E8u;
label_21b8e8:
    // 0x21b8e8: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x21b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
    // 0x21b8ec: 0x34421810  ori         $v0, $v0, 0x1810
    ctx->pc = 0x21b8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6160);
    // 0x21b8f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x21b8f0u;
    runtime->Store32(rdram, ctx, 0xB0001810u, GPR_U32(ctx, 3));
label_21b8f4:
    // 0x21b8f4: 0xf  sync
    ctx->pc = 0x21b8f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21b8f8: 0x42000038  ei
    ctx->pc = 0x21b8f8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x21b8fc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x21b8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21b900: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x21b900u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21b904: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x21b904u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21b908: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x21b908u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21b90c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x21b90cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21b910: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x21b910u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21b914: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x21b914u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21b918: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x21b918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21b91c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x21b91cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b920: 0x3e00008  jr          $ra
    ctx->pc = 0x21B920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B920u;
        // 0x21b924: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B928u;
}
