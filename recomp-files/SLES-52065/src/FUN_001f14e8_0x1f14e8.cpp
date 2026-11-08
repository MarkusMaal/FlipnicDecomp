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

// Function: FUN_001f14e8
// Address: 0x1f14e8 - 0x1f1724
void FUN_001f14e8_0x1f14e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f14e8_0x1f14e8");
#endif

    switch (ctx->pc) {
        case 0x1f1530u: goto label_1f1530;
        case 0x1f1548u: goto label_1f1548;
        case 0x1f1568u: goto label_1f1568;
        case 0x1f1654u: goto label_1f1654;
        case 0x1f1674u: goto label_1f1674;
        case 0x1f169cu: goto label_1f169c;
        case 0x1f16acu: goto label_1f16ac;
        case 0x1f16b4u: goto label_1f16b4;
        case 0x1f16c8u: goto label_1f16c8;
        case 0x1f16d8u: goto label_1f16d8;
        case 0x1f16e8u: goto label_1f16e8;
        case 0x1f16f0u: goto label_1f16f0;
        default: break;
    }

    ctx->pc = 0x1f14e8u;

    // 0x1f14e8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1f14e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1f14ec: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1f14ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1f14f0: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1f14f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1f14f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f14f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f14f8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1f14f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1f14fc: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1f14fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1500: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1f1500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1f1504: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f1504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1508: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1f1508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1f150c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1f150cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1f1510: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1f1510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1f1514: 0x3c1e0039  lui         $fp, 0x39
    ctx->pc = 0x1f1514u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)57 << 16));
    // 0x1f1518: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1f1518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1f151c: 0x27d3e200  addiu       $s3, $fp, -0x1E00
    ctx->pc = 0x1f151cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 4294959616));
    // 0x1f1520: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1f1520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1f1524: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1f1524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1f1528: 0xc07bcfa  jal         func_1EF3E8
    ctx->pc = 0x1F1528u;
    SET_GPR_U32(ctx, 31, 0x1F1530u);
    ctx->pc = 0x1F152Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1528u;
    // 0x1f152c: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF3E8u, 0x1F1528u, 0x1F1530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1530u;
label_1f1530:
    // 0x1f1530: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f1530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f1534: 0x8c62a45c  lw          $v0, -0x5BA4($v1)
    ctx->pc = 0x1f1534u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21A45Cu));
    // 0x1f1538: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1538u;
    {
        const bool branch_taken_0x1f1538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1538) {
            ctx->pc = 0x1F153Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1538u;
            // 0x1f153c: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F154Cu;
            goto label_1f154c;
        }
    }
    ctx->pc = 0x1F1540u;
    // 0x1f1540: 0xc07bd3c  jal         func_1EF4F0
    ctx->pc = 0x1F1540u;
    SET_GPR_U32(ctx, 31, 0x1F1548u);
    ctx->pc = 0x1EF4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF4F0u, 0x1F1540u, 0x1F1548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1548u;
label_1f1548:
    // 0x1f1548: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x1f1548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1f154c:
    // 0x1f154c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f154cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1550: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f1550u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1554: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1F1554u;
    {
        const bool branch_taken_0x1f1554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1554u;
        // 0x1f1558: 0xa2620050  sb          $v0, 0x50($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 80), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1554) {
            ctx->pc = 0x1F1590u;
            goto label_1f1590;
        }
    }
    ctx->pc = 0x1F155Cu;
    // 0x1f155c: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x1f155cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f1560: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x1f1560u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x1f1564: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f1564u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
label_1f1568:
    // 0x1f1568: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f1568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f156c: 0x2a220400  slti        $v0, $s1, 0x400
    ctx->pc = 0x1f156cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f1570: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F1570u;
    {
        const bool branch_taken_0x1f1570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1570u;
        // 0x1f1574: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1570) {
            ctx->pc = 0x1F159Cu;
            goto label_1f159c;
        }
    }
    ctx->pc = 0x1F1578u;
    // 0x1f1578: 0x2712021  addu        $a0, $s3, $s1
    ctx->pc = 0x1f1578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1f157c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f157cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1580: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F1580u;
    {
        const bool branch_taken_0x1f1580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1580u;
        // 0x1f1584: 0xa0830050  sb          $v1, 0x50($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1580) {
            ctx->pc = 0x1F1568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1568;
        }
    }
    ctx->pc = 0x1F1588u;
    // 0x1f1588: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1588u;
    {
        const bool branch_taken_0x1f1588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1588u;
        // 0x1f158c: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1588) {
            ctx->pc = 0x1F15A0u;
            goto label_1f15a0;
        }
    }
    ctx->pc = 0x1F1590u;
label_1f1590:
    // 0x1f1590: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x1f1590u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f1594: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x1f1594u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x1f1598: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f1598u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
label_1f159c:
    // 0x1f159c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1f159cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1f15a0:
    // 0x1f15a0: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F15A0u;
    {
        const bool branch_taken_0x1f15a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f15a0) {
            ctx->pc = 0x1F15B0u;
            goto label_1f15b0;
        }
    }
    ctx->pc = 0x1F15A8u;
    // 0x1f15a8: 0xa260044f  sb          $zero, 0x44F($s3)
    ctx->pc = 0x1f15a8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1103), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f15ac: 0x241103ff  addiu       $s1, $zero, 0x3FF
    ctx->pc = 0x1f15acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_1f15b0:
    // 0x1f15b0: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x1f15b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f15b4: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x1f15b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f15b8: 0x6a04000f  ldl         $a0, 0xF($s0)
    ctx->pc = 0x1f15b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1f15bc: 0x6e040008  ldr         $a0, 0x8($s0)
    ctx->pc = 0x1f15bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1f15c0: 0x6a050017  ldl         $a1, 0x17($s0)
    ctx->pc = 0x1f15c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1f15c4: 0x6e050010  ldr         $a1, 0x10($s0)
    ctx->pc = 0x1f15c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1f15c8: 0x6a06001f  ldl         $a2, 0x1F($s0)
    ctx->pc = 0x1f15c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1f15cc: 0x6e060018  ldr         $a2, 0x18($s0)
    ctx->pc = 0x1f15ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1f15d0: 0xb2630017  sdl         $v1, 0x17($s3)
    ctx->pc = 0x1f15d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f15d4: 0xb6630010  sdr         $v1, 0x10($s3)
    ctx->pc = 0x1f15d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f15d8: 0xb264001f  sdl         $a0, 0x1F($s3)
    ctx->pc = 0x1f15d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f15dc: 0xb6640018  sdr         $a0, 0x18($s3)
    ctx->pc = 0x1f15dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f15e0: 0xb2650027  sdl         $a1, 0x27($s3)
    ctx->pc = 0x1f15e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f15e4: 0xb6650020  sdr         $a1, 0x20($s3)
    ctx->pc = 0x1f15e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f15e8: 0xb266002f  sdl         $a2, 0x2F($s3)
    ctx->pc = 0x1f15e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f15ec: 0xb6660028  sdr         $a2, 0x28($s3)
    ctx->pc = 0x1f15ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f15f0: 0x6a030027  ldl         $v1, 0x27($s0)
    ctx->pc = 0x1f15f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f15f4: 0x6e030020  ldr         $v1, 0x20($s0)
    ctx->pc = 0x1f15f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f15f8: 0x6a04002f  ldl         $a0, 0x2F($s0)
    ctx->pc = 0x1f15f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1f15fc: 0x6e040028  ldr         $a0, 0x28($s0)
    ctx->pc = 0x1f15fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1f1600: 0x6a050037  ldl         $a1, 0x37($s0)
    ctx->pc = 0x1f1600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1f1604: 0x6e050030  ldr         $a1, 0x30($s0)
    ctx->pc = 0x1f1604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1f1608: 0x6a06003f  ldl         $a2, 0x3F($s0)
    ctx->pc = 0x1f1608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1f160c: 0x6e060038  ldr         $a2, 0x38($s0)
    ctx->pc = 0x1f160cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1f1610: 0xb2630037  sdl         $v1, 0x37($s3)
    ctx->pc = 0x1f1610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f1614: 0xb6630030  sdr         $v1, 0x30($s3)
    ctx->pc = 0x1f1614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f1618: 0xb264003f  sdl         $a0, 0x3F($s3)
    ctx->pc = 0x1f1618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f161c: 0xb6640038  sdr         $a0, 0x38($s3)
    ctx->pc = 0x1f161cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f1620: 0xb2650047  sdl         $a1, 0x47($s3)
    ctx->pc = 0x1f1620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f1624: 0xb6650040  sdr         $a1, 0x40($s3)
    ctx->pc = 0x1f1624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f1628: 0xb266004f  sdl         $a2, 0x4F($s3)
    ctx->pc = 0x1f1628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f162c: 0xb6660048  sdr         $a2, 0x48($s3)
    ctx->pc = 0x1f162cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f1630: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f1630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1634: 0xae77000c  sw          $s7, 0xC($s3)
    ctx->pc = 0x1f1634u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 23));
    // 0x1f1638: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f1638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f163c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f163cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1f1640: 0x27d0e200  addiu       $s0, $fp, -0x1E00
    ctx->pc = 0x1f1640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294959616));
    // 0x1f1644: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f1644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f1648: 0x26b5ee40  addiu       $s5, $s5, -0x11C0
    ctx->pc = 0x1f1648u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294962752));
    // 0x1f164c: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F164Cu;
    SET_GPR_U32(ctx, 31, 0x1F1654u);
    ctx->pc = 0x1F1650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F164Cu;
    // 0x1f1650: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F164Cu, 0x1F1654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1654u;
label_1f1654:
    // 0x1f1654: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f1654u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f165c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f165cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f1660: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x1f1660u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    // 0x1f1664: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1f1664u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x1f1668: 0x24050450  addiu       $a1, $zero, 0x450
    ctx->pc = 0x1f1668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1104));
    // 0x1f166c: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F166Cu;
    SET_GPR_U32(ctx, 31, 0x1F1674u);
    ctx->pc = 0x1F1670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F166Cu;
    // 0x1f1670: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F166Cu, 0x1F1674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1674u;
label_1f1674:
    // 0x1f1674: 0x26c4f900  addiu       $a0, $s6, -0x700
    ctx->pc = 0x1f1674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965504));
    // 0x1f1678: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f1678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f167c: 0x26280051  addiu       $t0, $s1, 0x51
    ctx->pc = 0x1f167cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 81));
    // 0x1f1680: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f1680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f1684: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1f1684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1f1688: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f168c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x1f168cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1690: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f1690u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f1694: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F1694u;
    SET_GPR_U32(ctx, 31, 0x1F169Cu);
    ctx->pc = 0x1F1698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1694u;
    // 0x1f1698: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F1694u, 0x1F169Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F169Cu;
label_1f169c:
    // 0x1f169c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F169Cu;
    {
        const bool branch_taken_0x1f169c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F169Cu;
        // 0x1f16a0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f169c) {
            ctx->pc = 0x1F16BCu;
            goto label_1f16bc;
        }
    }
    ctx->pc = 0x1F16A4u;
    // 0x1f16a4: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F16A4u;
    SET_GPR_U32(ctx, 31, 0x1F16ACu);
    ctx->pc = 0x1F16A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F16A4u;
    // 0x1f16a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F16A4u, 0x1F16ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F16ACu;
label_1f16ac:
    // 0x1f16ac: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F16ACu;
    SET_GPR_U32(ctx, 31, 0x1F16B4u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F16ACu, 0x1F16B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F16B4u;
label_1f16b4:
    // 0x1f16b4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F16B4u;
    {
        const bool branch_taken_0x1f16b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F16B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16B4u;
        // 0x1f16b8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f16b4) {
            ctx->pc = 0x1F16F4u;
            goto label_1f16f4;
        }
    }
    ctx->pc = 0x1F16BCu;
label_1f16bc:
    // 0x1f16bc: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x1f16bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x1f16c0: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F16C0u;
    SET_GPR_U32(ctx, 31, 0x1F16C8u);
    ctx->pc = 0x1F16C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F16C0u;
    // 0x1f16c4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F16C0u, 0x1F16C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F16C8u;
label_1f16c8:
    // 0x1f16c8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F16C8u;
    {
        const bool branch_taken_0x1f16c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f16c8) {
            ctx->pc = 0x1F16E0u;
            goto label_1f16e0;
        }
    }
    ctx->pc = 0x1F16D0u;
    // 0x1f16d0: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F16D0u;
    SET_GPR_U32(ctx, 31, 0x1F16D8u);
    ctx->pc = 0x1F16D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F16D0u;
    // 0x1f16d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F16D0u, 0x1F16D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F16D8u;
label_1f16d8:
    // 0x1f16d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F16D8u;
    {
        const bool branch_taken_0x1f16d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F16DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16D8u;
        // 0x1f16dc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f16d8) {
            ctx->pc = 0x1F16F4u;
            goto label_1f16f4;
        }
    }
    ctx->pc = 0x1F16E0u;
label_1f16e0:
    // 0x1f16e0: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F16E0u;
    SET_GPR_U32(ctx, 31, 0x1F16E8u);
    ctx->pc = 0x1F16E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F16E0u;
    // 0x1f16e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F16E0u, 0x1F16E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F16E8u;
label_1f16e8:
    // 0x1f16e8: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F16E8u;
    SET_GPR_U32(ctx, 31, 0x1F16F0u);
    ctx->pc = 0x1F16ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F16E8u;
    // 0x1f16ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F16E8u, 0x1F16F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F16F0u;
label_1f16f0:
    // 0x1f16f0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f16f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1f16f4:
    // 0x1f16f4: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1f16f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1f16f8: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1f16f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f16fc: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1f16fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f1700: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1f1700u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f1704: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1f1704u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f1708: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1f1708u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f170c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1f170cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f1710: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1f1710u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f1714: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1f1714u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f1718: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f1718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f171c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F171Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F171Cu;
        // 0x1f1720: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F171Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1724u;
}
