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

// Function: FUN_001d62c0
// Address: 0x1d62c0 - 0x1d6588
void FUN_001d62c0_0x1d62c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d62c0_0x1d62c0");
#endif

    switch (ctx->pc) {
        case 0x1d6348u: goto label_1d6348;
        case 0x1d6358u: goto label_1d6358;
        case 0x1d6378u: goto label_1d6378;
        case 0x1d638cu: goto label_1d638c;
        case 0x1d63a4u: goto label_1d63a4;
        case 0x1d63c0u: goto label_1d63c0;
        case 0x1d63ccu: goto label_1d63cc;
        case 0x1d63e0u: goto label_1d63e0;
        case 0x1d63ecu: goto label_1d63ec;
        case 0x1d640cu: goto label_1d640c;
        case 0x1d6430u: goto label_1d6430;
        case 0x1d6450u: goto label_1d6450;
        case 0x1d6464u: goto label_1d6464;
        case 0x1d6480u: goto label_1d6480;
        case 0x1d648cu: goto label_1d648c;
        case 0x1d649cu: goto label_1d649c;
        case 0x1d64b4u: goto label_1d64b4;
        case 0x1d64c0u: goto label_1d64c0;
        case 0x1d64d8u: goto label_1d64d8;
        case 0x1d64e4u: goto label_1d64e4;
        case 0x1d64f4u: goto label_1d64f4;
        case 0x1d6510u: goto label_1d6510;
        case 0x1d6524u: goto label_1d6524;
        case 0x1d6530u: goto label_1d6530;
        case 0x1d653cu: goto label_1d653c;
        case 0x1d6554u: goto label_1d6554;
        case 0x1d6560u: goto label_1d6560;
        default: break;
    }

    ctx->pc = 0x1d62c0u;

    // 0x1d62c0: 0x240309e4  addiu       $v1, $zero, 0x9E4
    ctx->pc = 0x1d62c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d62c4: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1d62c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1d62c8: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1d62c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d62cc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1d62ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1d62d0: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x1d62d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x1d62d4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d62d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d62d8: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x1d62d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x1d62dc: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x1d62dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x1d62e0: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x1d62e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x1d62e4: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1d62e4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x1d62e8: 0x26b50558  addiu       $s5, $s5, 0x558
    ctx->pc = 0x1d62e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1368));
    // 0x1d62ec: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x1d62ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d62f0: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x1d62f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x1d62f4: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x1d62f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x1d62f8: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x1d62f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x1d62fc: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x1d62fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x1d6300: 0x244a3590  addiu       $t2, $v0, 0x3590
    ctx->pc = 0x1d6300u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 13712));
    // 0x1d6304: 0x89470003  lwl         $a3, 0x3($t2)
    ctx->pc = 0x1d6304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x1d6308: 0x99470000  lwr         $a3, 0x0($t2)
    ctx->pc = 0x1d6308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x1d630c: 0xaba70003  swl         $a3, 0x3($sp)
    ctx->pc = 0x1d630cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1d6310: 0xbba70000  swr         $a3, 0x0($sp)
    ctx->pc = 0x1d6310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1d6314: 0x4800092  bltz        $a0, . + 4 + (0x92 << 2)
    ctx->pc = 0x1D6314u;
    {
        const bool branch_taken_0x1d6314 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1D6318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6314u;
        // 0x1d6318: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6314) {
            ctx->pc = 0x1D6560u;
            goto label_1d6560;
        }
    }
    ctx->pc = 0x1D631Cu;
    // 0x1d631c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1d631cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1d6320: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x1d6320u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d6324: 0x90433598  lbu         $v1, 0x3598($v0)
    ctx->pc = 0x1d6324u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x223598u));
    // 0x1d6328: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d6328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d632c: 0x24a535a0  addiu       $a1, $a1, 0x35A0
    ctx->pc = 0x1d632cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13728));
    // 0x1d6330: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d6330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6334: 0xa2830000  sb          $v1, 0x0($s4)
    ctx->pc = 0x1d6334u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d6338: 0x3c160022  lui         $s6, 0x22
    ctx->pc = 0x1d6338u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
    // 0x1d633c: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x1d633cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d6340: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1D6340u;
    SET_GPR_U32(ctx, 31, 0x1D6348u);
    ctx->pc = 0x1D6344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6340u;
    // 0x1d6344: 0x26b00310  addiu       $s0, $s5, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1D6340u, 0x1D6348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6348u;
label_1d6348:
    // 0x1d6348: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d6348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d634c: 0x24a535c8  addiu       $a1, $a1, 0x35C8
    ctx->pc = 0x1d634cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13768));
    // 0x1d6350: 0xc080664  jal         func_201990
    ctx->pc = 0x1D6350u;
    SET_GPR_U32(ctx, 31, 0x1D6358u);
    ctx->pc = 0x1D6354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6350u;
    // 0x1d6354: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D6350u, 0x1D6358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6358u;
label_1d6358:
    // 0x1d6358: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d6358u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d635c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1d635cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1d6360: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x1d6360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1d6364: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1d6364u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1d6368: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1d6368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d636c: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x1d636cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1d6370: 0x39040  sll         $s2, $v1, 1
    ctx->pc = 0x1d6370u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d6374: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d6374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d6378:
    // 0x1d6378: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6378u;
    {
        const bool branch_taken_0x1d6378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6378u;
        // 0x1d637c: 0x26100074  addiu       $s0, $s0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6378) {
            ctx->pc = 0x1D6398u;
            goto label_1d6398;
        }
    }
    ctx->pc = 0x1D6380u;
    // 0x1d6380: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d6380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6384: 0xc080664  jal         func_201990
    ctx->pc = 0x1D6384u;
    SET_GPR_U32(ctx, 31, 0x1D638Cu);
    ctx->pc = 0x1D6388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6384u;
    // 0x1d6388: 0x3b22821  addu        $a1, $sp, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D6384u, 0x1D638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D638Cu;
label_1d638c:
    // 0x1d638c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D638Cu;
    {
        const bool branch_taken_0x1d638c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D638Cu;
        // 0x1d6390: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d638c) {
            ctx->pc = 0x1D63A8u;
            goto label_1d63a8;
        }
    }
    ctx->pc = 0x1D6394u;
    // 0x1d6394: 0x0  nop
    ctx->pc = 0x1d6394u;
    // NOP
label_1d6398:
    // 0x1d6398: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d6398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d639c: 0xc080664  jal         func_201990
    ctx->pc = 0x1D639Cu;
    SET_GPR_U32(ctx, 31, 0x1D63A4u);
    ctx->pc = 0x1D63A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D639Cu;
    // 0x1d63a0: 0x26c535d8  addiu       $a1, $s6, 0x35D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 13784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D639Cu, 0x1D63A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D63A4u;
label_1d63a4:
    // 0x1d63a4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1d63a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1d63a8:
    // 0x1d63a8: 0x623fff3  bgezl       $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D63A8u;
    {
        const bool branch_taken_0x1d63a8 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1d63a8) {
            ctx->pc = 0x1D63ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D63A8u;
            // 0x1d63ac: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6378;
        }
    }
    ctx->pc = 0x1D63B0u;
    // 0x1d63b0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d63b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d63b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d63b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d63b8: 0xc080664  jal         func_201990
    ctx->pc = 0x1D63B8u;
    SET_GPR_U32(ctx, 31, 0x1D63C0u);
    ctx->pc = 0x1D63BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D63B8u;
    // 0x1d63bc: 0x24a535e0  addiu       $a1, $a1, 0x35E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D63B8u, 0x1D63C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D63C0u;
label_1d63c0:
    // 0x1d63c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d63c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d63c4: 0xc080664  jal         func_201990
    ctx->pc = 0x1D63C4u;
    SET_GPR_U32(ctx, 31, 0x1D63CCu);
    ctx->pc = 0x1D63C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D63C4u;
    // 0x1d63c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D63C4u, 0x1D63CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D63CCu;
label_1d63cc:
    // 0x1d63cc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d63ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d63d0: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x1d63d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1d63d4: 0x24a535e8  addiu       $a1, $a1, 0x35E8
    ctx->pc = 0x1d63d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13800));
    // 0x1d63d8: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1D63D8u;
    SET_GPR_U32(ctx, 31, 0x1D63E0u);
    ctx->pc = 0x1D63DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D63D8u;
    // 0x1d63dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1D63D8u, 0x1D63E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D63E0u;
label_1d63e0:
    // 0x1d63e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d63e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d63e4: 0xc080664  jal         func_201990
    ctx->pc = 0x1D63E4u;
    SET_GPR_U32(ctx, 31, 0x1D63ECu);
    ctx->pc = 0x1D63E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D63E4u;
    // 0x1d63e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D63E4u, 0x1D63ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D63ECu;
label_1d63ec:
    // 0x1d63ec: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x1d63ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1d63f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d63f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d63f4: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D63F4u;
    {
        const bool branch_taken_0x1d63f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d63f4) {
            ctx->pc = 0x1D63F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D63F4u;
            // 0x1d63f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6418u;
            goto label_1d6418;
        }
    }
    ctx->pc = 0x1D63FCu;
    // 0x1d63fc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d63fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d6400: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d6400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6404: 0xc080664  jal         func_201990
    ctx->pc = 0x1D6404u;
    SET_GPR_U32(ctx, 31, 0x1D640Cu);
    ctx->pc = 0x1D6408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6404u;
    // 0x1d6408: 0x24a53600  addiu       $a1, $a1, 0x3600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D6404u, 0x1D640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D640Cu;
label_1d640c:
    // 0x1d640c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1D640Cu;
    {
        const bool branch_taken_0x1d640c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D640Cu;
        // 0x1d6410: 0x8ea80258  lw          $t0, 0x258($s5) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d640c) {
            ctx->pc = 0x1D6468u;
            goto label_1d6468;
        }
    }
    ctx->pc = 0x1D6414u;
    // 0x1d6414: 0x0  nop
    ctx->pc = 0x1d6414u;
    // NOP
label_1d6418:
    // 0x1d6418: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6418u;
    {
        const bool branch_taken_0x1d6418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d6418) {
            ctx->pc = 0x1D641Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6418u;
            // 0x1d641c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6438u;
            goto label_1d6438;
        }
    }
    ctx->pc = 0x1D6420u;
    // 0x1d6420: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d6420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d6424: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d6424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6428: 0xc080664  jal         func_201990
    ctx->pc = 0x1D6428u;
    SET_GPR_U32(ctx, 31, 0x1D6430u);
    ctx->pc = 0x1D642Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6428u;
    // 0x1d642c: 0x24a53620  addiu       $a1, $a1, 0x3620 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D6428u, 0x1D6430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6430u;
label_1d6430:
    // 0x1d6430: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D6430u;
    {
        const bool branch_taken_0x1d6430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6430u;
        // 0x1d6434: 0x8ea80258  lw          $t0, 0x258($s5) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6430) {
            ctx->pc = 0x1D6468u;
            goto label_1d6468;
        }
    }
    ctx->pc = 0x1D6438u;
label_1d6438:
    // 0x1d6438: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6438u;
    {
        const bool branch_taken_0x1d6438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d6438) {
            ctx->pc = 0x1D643Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6438u;
            // 0x1d643c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6458u;
            goto label_1d6458;
        }
    }
    ctx->pc = 0x1D6440u;
    // 0x1d6440: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d6440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d6444: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d6444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6448: 0xc080664  jal         func_201990
    ctx->pc = 0x1D6448u;
    SET_GPR_U32(ctx, 31, 0x1D6450u);
    ctx->pc = 0x1D644Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6448u;
    // 0x1d644c: 0x24a53640  addiu       $a1, $a1, 0x3640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D6448u, 0x1D6450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6450u;
label_1d6450:
    // 0x1d6450: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6450u;
    {
        const bool branch_taken_0x1d6450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6450u;
        // 0x1d6454: 0x8ea80258  lw          $t0, 0x258($s5) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6450) {
            ctx->pc = 0x1D6468u;
            goto label_1d6468;
        }
    }
    ctx->pc = 0x1D6458u;
label_1d6458:
    // 0x1d6458: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d6458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d645c: 0xc080664  jal         func_201990
    ctx->pc = 0x1D645Cu;
    SET_GPR_U32(ctx, 31, 0x1D6464u);
    ctx->pc = 0x1D6460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D645Cu;
    // 0x1d6460: 0x24a53668  addiu       $a1, $a1, 0x3668 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D645Cu, 0x1D6464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6464u;
label_1d6464:
    // 0x1d6464: 0x8ea80258  lw          $t0, 0x258($s5)
    ctx->pc = 0x1d6464u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 600)));
label_1d6468:
    // 0x1d6468: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d6468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d646c: 0x8ea7025c  lw          $a3, 0x25C($s5)
    ctx->pc = 0x1d646cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 604)));
    // 0x1d6470: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1d6470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1d6474: 0x24a53680  addiu       $a1, $a1, 0x3680
    ctx->pc = 0x1d6474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13952));
    // 0x1d6478: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1D6478u;
    SET_GPR_U32(ctx, 31, 0x1D6480u);
    ctx->pc = 0x1D647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6478u;
    // 0x1d647c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1D6478u, 0x1D6480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6480u;
label_1d6480:
    // 0x1d6480: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d6480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6484: 0xc080664  jal         func_201990
    ctx->pc = 0x1D6484u;
    SET_GPR_U32(ctx, 31, 0x1D648Cu);
    ctx->pc = 0x1D6488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6484u;
    // 0x1d6488: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D6484u, 0x1D648Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D648Cu;
label_1d648c:
    // 0x1d648c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d648cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d6490: 0x24a536a8  addiu       $a1, $a1, 0x36A8
    ctx->pc = 0x1d6490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13992));
    // 0x1d6494: 0xc080664  jal         func_201990
    ctx->pc = 0x1D6494u;
    SET_GPR_U32(ctx, 31, 0x1D649Cu);
    ctx->pc = 0x1D6498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6494u;
    // 0x1d6498: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D6494u, 0x1D649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D649Cu;
label_1d649c:
    // 0x1d649c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d649cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d64a0: 0x8ea6002c  lw          $a2, 0x2C($s5)
    ctx->pc = 0x1d64a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x1d64a4: 0x24a536b8  addiu       $a1, $a1, 0x36B8
    ctx->pc = 0x1d64a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14008));
    // 0x1d64a8: 0x8ea70030  lw          $a3, 0x30($s5)
    ctx->pc = 0x1d64a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1d64ac: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1D64ACu;
    SET_GPR_U32(ctx, 31, 0x1D64B4u);
    ctx->pc = 0x1D64B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D64ACu;
    // 0x1d64b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1D64ACu, 0x1D64B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D64B4u;
label_1d64b4:
    // 0x1d64b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d64b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d64b8: 0xc080664  jal         func_201990
    ctx->pc = 0x1D64B8u;
    SET_GPR_U32(ctx, 31, 0x1D64C0u);
    ctx->pc = 0x1D64BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D64B8u;
    // 0x1d64bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D64B8u, 0x1D64C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D64C0u;
label_1d64c0:
    // 0x1d64c0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d64c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d64c4: 0x8ea60034  lw          $a2, 0x34($s5)
    ctx->pc = 0x1d64c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1d64c8: 0x24a536e8  addiu       $a1, $a1, 0x36E8
    ctx->pc = 0x1d64c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14056));
    // 0x1d64cc: 0x8ea70038  lw          $a3, 0x38($s5)
    ctx->pc = 0x1d64ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x1d64d0: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1D64D0u;
    SET_GPR_U32(ctx, 31, 0x1D64D8u);
    ctx->pc = 0x1D64D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D64D0u;
    // 0x1d64d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1D64D0u, 0x1D64D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D64D8u;
label_1d64d8:
    // 0x1d64d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d64d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d64dc: 0xc080664  jal         func_201990
    ctx->pc = 0x1D64DCu;
    SET_GPR_U32(ctx, 31, 0x1D64E4u);
    ctx->pc = 0x1D64E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D64DCu;
    // 0x1d64e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D64DCu, 0x1D64E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D64E4u;
label_1d64e4:
    // 0x1d64e4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d64e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d64e8: 0x24a53718  addiu       $a1, $a1, 0x3718
    ctx->pc = 0x1d64e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14104));
    // 0x1d64ec: 0xc080664  jal         func_201990
    ctx->pc = 0x1D64ECu;
    SET_GPR_U32(ctx, 31, 0x1D64F4u);
    ctx->pc = 0x1D64F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D64ECu;
    // 0x1d64f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D64ECu, 0x1D64F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D64F4u;
label_1d64f4:
    // 0x1d64f4: 0x8ea30044  lw          $v1, 0x44($s5)
    ctx->pc = 0x1d64f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x1d64f8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D64F8u;
    {
        const bool branch_taken_0x1d64f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D64FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D64F8u;
        // 0x1d64fc: 0x3c100022  lui         $s0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d64f8) {
            ctx->pc = 0x1D6518u;
            goto label_1d6518;
        }
    }
    ctx->pc = 0x1D6500u;
    // 0x1d6500: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d6500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d6504: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d6504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6508: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1D6508u;
    SET_GPR_U32(ctx, 31, 0x1D6510u);
    ctx->pc = 0x1D650Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6508u;
    // 0x1d650c: 0x24a53728  addiu       $a1, $a1, 0x3728 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1D6508u, 0x1D6510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6510u;
label_1d6510:
    // 0x1d6510: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6510u;
    {
        const bool branch_taken_0x1d6510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6510u;
        // 0x1d6514: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6510) {
            ctx->pc = 0x1D6528u;
            goto label_1d6528;
        }
    }
    ctx->pc = 0x1D6518u;
label_1d6518:
    // 0x1d6518: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d6518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d651c: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1D651Cu;
    SET_GPR_U32(ctx, 31, 0x1D6524u);
    ctx->pc = 0x1D6520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D651Cu;
    // 0x1d6520: 0x26053740  addiu       $a1, $s0, 0x3740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 14144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1D651Cu, 0x1D6524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6524u;
label_1d6524:
    // 0x1d6524: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d6524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d6528:
    // 0x1d6528: 0xc080664  jal         func_201990
    ctx->pc = 0x1D6528u;
    SET_GPR_U32(ctx, 31, 0x1D6530u);
    ctx->pc = 0x1D652Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6528u;
    // 0x1d652c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D6528u, 0x1D6530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6530u;
label_1d6530:
    // 0x1d6530: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d6530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6534: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1D6534u;
    SET_GPR_U32(ctx, 31, 0x1D653Cu);
    ctx->pc = 0x1D6538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6534u;
    // 0x1d6538: 0x26053740  addiu       $a1, $s0, 0x3740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 14144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1D6534u, 0x1D653Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D653Cu;
label_1d653c:
    // 0x1d653c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d653cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d6540: 0x8ea60048  lw          $a2, 0x48($s5)
    ctx->pc = 0x1d6540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x1d6544: 0x24a53758  addiu       $a1, $a1, 0x3758
    ctx->pc = 0x1d6544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14168));
    // 0x1d6548: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d6548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d654c: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1D654Cu;
    SET_GPR_U32(ctx, 31, 0x1D6554u);
    ctx->pc = 0x1D6550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D654Cu;
    // 0x1d6550: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1D654Cu, 0x1D6554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6554u;
label_1d6554:
    // 0x1d6554: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d6554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6558: 0xc080664  jal         func_201990
    ctx->pc = 0x1D6558u;
    SET_GPR_U32(ctx, 31, 0x1D6560u);
    ctx->pc = 0x1D655Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6558u;
    // 0x1d655c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D6558u, 0x1D6560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6560u;
label_1d6560:
    // 0x1d6560: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x1d6560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d6564: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x1d6564u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1d6568: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x1d6568u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d656c: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x1d656cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1d6570: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x1d6570u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d6574: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x1d6574u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1d6578: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x1d6578u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d657c: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x1d657cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1d6580: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6580u;
        // 0x1d6584: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6588u;
}
