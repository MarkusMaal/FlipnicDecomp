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

// Function: FUN_001f1728
// Address: 0x1f1728 - 0x1f1918
void FUN_001f1728_0x1f1728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f1728_0x1f1728");
#endif

    switch (ctx->pc) {
        case 0x1f1764u: goto label_1f1764;
        case 0x1f177cu: goto label_1f177c;
        case 0x1f17a0u: goto label_1f17a0;
        case 0x1f1800u: goto label_1f1800;
        case 0x1f184cu: goto label_1f184c;
        case 0x1f1870u: goto label_1f1870;
        case 0x1f1898u: goto label_1f1898;
        case 0x1f18a8u: goto label_1f18a8;
        case 0x1f18b0u: goto label_1f18b0;
        case 0x1f18c4u: goto label_1f18c4;
        case 0x1f18d4u: goto label_1f18d4;
        case 0x1f18e4u: goto label_1f18e4;
        case 0x1f18ecu: goto label_1f18ec;
        default: break;
    }

    ctx->pc = 0x1f1728u;

    // 0x1f1728: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1f1728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1f172c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1f172cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1f1730: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1f1730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1f1734: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f1734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1738: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1f1738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1f173c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f173cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1740: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1f1740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1f1744: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1f1744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1f1748: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1f1748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1f174c: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x1f174cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x1f1750: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1f1750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1f1754: 0x26d2e200  addiu       $s2, $s6, -0x1E00
    ctx->pc = 0x1f1754u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959616));
    // 0x1f1758: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1f1758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1f175c: 0xc07bcfa  jal         func_1EF3E8
    ctx->pc = 0x1F175Cu;
    SET_GPR_U32(ctx, 31, 0x1F1764u);
    ctx->pc = 0x1F1760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F175Cu;
    // 0x1f1760: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF3E8u, 0x1F175Cu, 0x1F1764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1764u;
label_1f1764:
    // 0x1f1764: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f1764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f1768: 0x8c43a45c  lw          $v1, -0x5BA4($v0)
    ctx->pc = 0x1f1768u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21A45Cu));
    // 0x1f176c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F176Cu;
    {
        const bool branch_taken_0x1f176c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f176c) {
            ctx->pc = 0x1F1770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F176Cu;
            // 0x1f1770: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1780u;
            goto label_1f1780;
        }
    }
    ctx->pc = 0x1F1774u;
    // 0x1f1774: 0xc07bd3c  jal         func_1EF4F0
    ctx->pc = 0x1F1774u;
    SET_GPR_U32(ctx, 31, 0x1F177Cu);
    ctx->pc = 0x1EF4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF4F0u, 0x1F1774u, 0x1F177Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F177Cu;
label_1f177c:
    // 0x1f177c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f177cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1f1780:
    // 0x1f1780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f1780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1784: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1f1784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1f1788: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F1788u;
    {
        const bool branch_taken_0x1f1788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1788u;
        // 0x1f178c: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1788) {
            ctx->pc = 0x1F17CCu;
            goto label_1f17cc;
        }
    }
    ctx->pc = 0x1F1790u;
    // 0x1f1790: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1f1790u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f1794: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f1794u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f1798: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f1798u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    // 0x1f179c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f179cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1f17a0:
    // 0x1f17a0: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1f17a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f17a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F17A4u;
    {
        const bool branch_taken_0x1f17a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F17A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17A4u;
        // 0x1f17a8: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f17a4) {
            ctx->pc = 0x1F17D8u;
            goto label_1f17d8;
        }
    }
    ctx->pc = 0x1F17ACu;
    // 0x1f17ac: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1f17acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1f17b0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f17b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f17b4: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1f17b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f17b8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1f17b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1f17bc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F17BCu;
    {
        const bool branch_taken_0x1f17bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f17bc) {
            ctx->pc = 0x1F17C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F17BCu;
            // 0x1f17c0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F17A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f17a0;
        }
    }
    ctx->pc = 0x1F17C4u;
    // 0x1f17c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F17C4u;
    {
        const bool branch_taken_0x1f17c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F17C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17C4u;
        // 0x1f17c8: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f17c4) {
            ctx->pc = 0x1F17DCu;
            goto label_1f17dc;
        }
    }
    ctx->pc = 0x1F17CCu;
label_1f17cc:
    // 0x1f17cc: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1f17ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f17d0: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f17d0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f17d4: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f17d4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
label_1f17d8:
    // 0x1f17d8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1f17d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1f17dc:
    // 0x1f17dc: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F17DCu;
    {
        const bool branch_taken_0x1f17dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f17dc) {
            ctx->pc = 0x1F17E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F17DCu;
            // 0x1f17e0: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F17E4u;
            goto label_1f17e4;
        }
    }
    ctx->pc = 0x1F17E4u;
label_1f17e4:
    // 0x1f17e4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f17e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f17e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f17e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f17ec: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1f17ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1f17f0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F17F0u;
    {
        const bool branch_taken_0x1f17f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F17F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17F0u;
        // 0x1f17f4: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f17f0) {
            ctx->pc = 0x1F1824u;
            goto label_1f1824;
        }
    }
    ctx->pc = 0x1F17F8u;
    // 0x1f17f8: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x1f17f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x1f17fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f17fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1f1800:
    // 0x1f1800: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1f1800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f1804: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1804u;
    {
        const bool branch_taken_0x1f1804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1804u;
        // 0x1f1808: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1804) {
            ctx->pc = 0x1F1824u;
            goto label_1f1824;
        }
    }
    ctx->pc = 0x1F180Cu;
    // 0x1f180c: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1f180cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1f1810: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f1810u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1814: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1f1814u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f1818: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1f1818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1f181c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F181Cu;
    {
        const bool branch_taken_0x1f181c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f181c) {
            ctx->pc = 0x1F1820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F181Cu;
            // 0x1f1820: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1800;
        }
    }
    ctx->pc = 0x1F1824u;
label_1f1824:
    // 0x1f1824: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1f1824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1f1828: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F1828u;
    {
        const bool branch_taken_0x1f1828 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f1828) {
            ctx->pc = 0x1F182Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1828u;
            // 0x1f182c: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1830u;
            goto label_1f1830;
        }
    }
    ctx->pc = 0x1F1830u;
label_1f1830:
    // 0x1f1830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f1830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1834: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f1834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f1838: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f1838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1f183c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f183cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f1840: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1f1840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1f1844: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F1844u;
    SET_GPR_U32(ctx, 31, 0x1F184Cu);
    ctx->pc = 0x1F1848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1844u;
    // 0x1f1848: 0x26d0e200  addiu       $s0, $s6, -0x1E00 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F1844u, 0x1F184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F184Cu;
label_1f184c:
    // 0x1f184c: 0x2694ee40  addiu       $s4, $s4, -0x11C0
    ctx->pc = 0x1f184cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962752));
    // 0x1f1850: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f1850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1858: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f1858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f185c: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1f185cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1f1860: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f1860u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f1864: 0x2405080c  addiu       $a1, $zero, 0x80C
    ctx->pc = 0x1f1864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x1f1868: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F1868u;
    SET_GPR_U32(ctx, 31, 0x1F1870u);
    ctx->pc = 0x1F186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1868u;
    // 0x1f186c: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F1868u, 0x1F1870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1870u;
label_1f1870:
    // 0x1f1870: 0x26a4f900  addiu       $a0, $s5, -0x700
    ctx->pc = 0x1f1870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965504));
    // 0x1f1874: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f1874u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1878: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f1878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f187c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1f187cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1f1880: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1884: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x1f1884u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x1f1888: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1f1888u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f188c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f188cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f1890: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F1890u;
    SET_GPR_U32(ctx, 31, 0x1F1898u);
    ctx->pc = 0x1F1894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1890u;
    // 0x1f1894: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F1890u, 0x1F1898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1898u;
label_1f1898:
    // 0x1f1898: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1898u;
    {
        const bool branch_taken_0x1f1898 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1898u;
        // 0x1f189c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1898) {
            ctx->pc = 0x1F18B8u;
            goto label_1f18b8;
        }
    }
    ctx->pc = 0x1F18A0u;
    // 0x1f18a0: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F18A0u;
    SET_GPR_U32(ctx, 31, 0x1F18A8u);
    ctx->pc = 0x1F18A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F18A0u;
    // 0x1f18a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F18A0u, 0x1F18A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F18A8u;
label_1f18a8:
    // 0x1f18a8: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F18A8u;
    SET_GPR_U32(ctx, 31, 0x1F18B0u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F18A8u, 0x1F18B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F18B0u;
label_1f18b0:
    // 0x1f18b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F18B0u;
    {
        const bool branch_taken_0x1f18b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F18B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18B0u;
        // 0x1f18b4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f18b0) {
            ctx->pc = 0x1F18F0u;
            goto label_1f18f0;
        }
    }
    ctx->pc = 0x1F18B8u;
label_1f18b8:
    // 0x1f18b8: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1f18b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1f18bc: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F18BCu;
    SET_GPR_U32(ctx, 31, 0x1F18C4u);
    ctx->pc = 0x1F18C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F18BCu;
    // 0x1f18c0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F18BCu, 0x1F18C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F18C4u;
label_1f18c4:
    // 0x1f18c4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F18C4u;
    {
        const bool branch_taken_0x1f18c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f18c4) {
            ctx->pc = 0x1F18DCu;
            goto label_1f18dc;
        }
    }
    ctx->pc = 0x1F18CCu;
    // 0x1f18cc: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F18CCu;
    SET_GPR_U32(ctx, 31, 0x1F18D4u);
    ctx->pc = 0x1F18D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F18CCu;
    // 0x1f18d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F18CCu, 0x1F18D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F18D4u;
label_1f18d4:
    // 0x1f18d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F18D4u;
    {
        const bool branch_taken_0x1f18d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F18D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18D4u;
        // 0x1f18d8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f18d4) {
            ctx->pc = 0x1F18F0u;
            goto label_1f18f0;
        }
    }
    ctx->pc = 0x1F18DCu;
label_1f18dc:
    // 0x1f18dc: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F18DCu;
    SET_GPR_U32(ctx, 31, 0x1F18E4u);
    ctx->pc = 0x1F18E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F18DCu;
    // 0x1f18e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F18DCu, 0x1F18E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F18E4u;
label_1f18e4:
    // 0x1f18e4: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F18E4u;
    SET_GPR_U32(ctx, 31, 0x1F18ECu);
    ctx->pc = 0x1F18E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F18E4u;
    // 0x1f18e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F18E4u, 0x1F18ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F18ECu;
label_1f18ec:
    // 0x1f18ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f18ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1f18f0:
    // 0x1f18f0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1f18f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f18f4: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1f18f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f18f8: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1f18f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f18fc: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1f18fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f1900: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1f1900u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f1904: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1f1904u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f1908: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1f1908u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f190c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f190cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f1910: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1910u;
        // 0x1f1914: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1918u;
}
