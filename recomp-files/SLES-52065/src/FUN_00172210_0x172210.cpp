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

// Function: FUN_00172210
// Address: 0x172210 - 0x172500
void FUN_00172210_0x172210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00172210_0x172210");
#endif

    switch (ctx->pc) {
        case 0x172260u: goto label_172260;
        case 0x172294u: goto label_172294;
        case 0x1722c8u: goto label_1722c8;
        case 0x1722fcu: goto label_1722fc;
        case 0x172330u: goto label_172330;
        case 0x172364u: goto label_172364;
        case 0x172398u: goto label_172398;
        case 0x1723ccu: goto label_1723cc;
        case 0x172400u: goto label_172400;
        case 0x172434u: goto label_172434;
        case 0x172468u: goto label_172468;
        case 0x1724a8u: goto label_1724a8;
        case 0x1724bcu: goto label_1724bc;
        case 0x1724d0u: goto label_1724d0;
        case 0x1724e8u: goto label_1724e8;
        default: break;
    }

    ctx->pc = 0x172210u;

    // 0x172210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x172210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x172214: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x172214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x172218: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x172218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17221c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17221cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x172220: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x172220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172224: 0x122000b0  beqz        $s1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x172224u;
    {
        const bool branch_taken_0x172224 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x172228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172224u;
        // 0x172228: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172224) {
            ctx->pc = 0x1724E8u;
            goto label_1724e8;
        }
    }
    ctx->pc = 0x17222Cu;
    // 0x17222c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x17222cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x172230: 0x262200e8  addiu       $v0, $s1, 0xE8
    ctx->pc = 0x172230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
    // 0x172234: 0x2463ac50  addiu       $v1, $v1, -0x53B0
    ctx->pc = 0x172234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945872));
    // 0x172238: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x172238u;
    {
        const bool branch_taken_0x172238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172238u;
        // 0x17223c: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172238) {
            ctx->pc = 0x172268u;
            goto label_172268;
        }
    }
    ctx->pc = 0x172240u;
    // 0x172240: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x172240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x172244: 0x2442acc0  addiu       $v0, $v0, -0x5340
    ctx->pc = 0x172244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945984));
    // 0x172248: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x172248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
    // 0x17224c: 0x8e2400ec  lw          $a0, 0xEC($s1)
    ctx->pc = 0x17224cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
    // 0x172250: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x172250u;
    {
        const bool branch_taken_0x172250 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x172254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172250u;
        // 0x172254: 0x262200d8  addiu       $v0, $s1, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172250) {
            ctx->pc = 0x17226Cu;
            goto label_17226c;
        }
    }
    ctx->pc = 0x172258u;
    // 0x172258: 0xc04018c  jal         func_100630
    ctx->pc = 0x172258u;
    SET_GPR_U32(ctx, 31, 0x172260u);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x172258u, 0x172260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172260u;
label_172260:
    // 0x172260: 0xae2000ec  sw          $zero, 0xEC($s1)
    ctx->pc = 0x172260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 0));
    // 0x172264: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x172264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
label_172268:
    // 0x172268: 0x262200d8  addiu       $v0, $s1, 0xD8
    ctx->pc = 0x172268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 216));
label_17226c:
    // 0x17226c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17226Cu;
    {
        const bool branch_taken_0x17226c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17226Cu;
        // 0x172270: 0x262200c8  addiu       $v0, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17226c) {
            ctx->pc = 0x1722A0u;
            goto label_1722a0;
        }
    }
    ctx->pc = 0x172274u;
    // 0x172274: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x172274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x172278: 0x2442acc0  addiu       $v0, $v0, -0x5340
    ctx->pc = 0x172278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945984));
    // 0x17227c: 0xae2200e4  sw          $v0, 0xE4($s1)
    ctx->pc = 0x17227cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 2));
    // 0x172280: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x172280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x172284: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172284u;
    {
        const bool branch_taken_0x172284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172284) {
            ctx->pc = 0x17229Cu;
            goto label_17229c;
        }
    }
    ctx->pc = 0x17228Cu;
    // 0x17228c: 0xc04018c  jal         func_100630
    ctx->pc = 0x17228Cu;
    SET_GPR_U32(ctx, 31, 0x172294u);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x17228Cu, 0x172294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172294u;
label_172294:
    // 0x172294: 0xae2000dc  sw          $zero, 0xDC($s1)
    ctx->pc = 0x172294u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 0));
    // 0x172298: 0xae2000d8  sw          $zero, 0xD8($s1)
    ctx->pc = 0x172298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
label_17229c:
    // 0x17229c: 0x262200c8  addiu       $v0, $s1, 0xC8
    ctx->pc = 0x17229cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
label_1722a0:
    // 0x1722a0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1722A0u;
    {
        const bool branch_taken_0x1722a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1722A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1722A0u;
        // 0x1722a4: 0x262200b8  addiu       $v0, $s1, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1722a0) {
            ctx->pc = 0x1722D4u;
            goto label_1722d4;
        }
    }
    ctx->pc = 0x1722A8u;
    // 0x1722a8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1722a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1722ac: 0x2442acc0  addiu       $v0, $v0, -0x5340
    ctx->pc = 0x1722acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945984));
    // 0x1722b0: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x1722b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
    // 0x1722b4: 0x8e2400cc  lw          $a0, 0xCC($s1)
    ctx->pc = 0x1722b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x1722b8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1722B8u;
    {
        const bool branch_taken_0x1722b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1722b8) {
            ctx->pc = 0x1722D0u;
            goto label_1722d0;
        }
    }
    ctx->pc = 0x1722C0u;
    // 0x1722c0: 0xc04018c  jal         func_100630
    ctx->pc = 0x1722C0u;
    SET_GPR_U32(ctx, 31, 0x1722C8u);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1722C0u, 0x1722C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1722C8u;
label_1722c8:
    // 0x1722c8: 0xae2000cc  sw          $zero, 0xCC($s1)
    ctx->pc = 0x1722c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 0));
    // 0x1722cc: 0xae2000c8  sw          $zero, 0xC8($s1)
    ctx->pc = 0x1722ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
label_1722d0:
    // 0x1722d0: 0x262200b8  addiu       $v0, $s1, 0xB8
    ctx->pc = 0x1722d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
label_1722d4:
    // 0x1722d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1722D4u;
    {
        const bool branch_taken_0x1722d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1722D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1722D4u;
        // 0x1722d8: 0x262200a8  addiu       $v0, $s1, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1722d4) {
            ctx->pc = 0x172308u;
            goto label_172308;
        }
    }
    ctx->pc = 0x1722DCu;
    // 0x1722dc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1722dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1722e0: 0x2442acc0  addiu       $v0, $v0, -0x5340
    ctx->pc = 0x1722e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945984));
    // 0x1722e4: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x1722e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
    // 0x1722e8: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x1722e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x1722ec: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1722ECu;
    {
        const bool branch_taken_0x1722ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1722ec) {
            ctx->pc = 0x172304u;
            goto label_172304;
        }
    }
    ctx->pc = 0x1722F4u;
    // 0x1722f4: 0xc04018c  jal         func_100630
    ctx->pc = 0x1722F4u;
    SET_GPR_U32(ctx, 31, 0x1722FCu);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1722F4u, 0x1722FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1722FCu;
label_1722fc:
    // 0x1722fc: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x1722fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
    // 0x172300: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x172300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
label_172304:
    // 0x172304: 0x262200a8  addiu       $v0, $s1, 0xA8
    ctx->pc = 0x172304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
label_172308:
    // 0x172308: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x172308u;
    {
        const bool branch_taken_0x172308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172308u;
        // 0x17230c: 0x26220098  addiu       $v0, $s1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172308) {
            ctx->pc = 0x17233Cu;
            goto label_17233c;
        }
    }
    ctx->pc = 0x172310u;
    // 0x172310: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x172310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x172314: 0x2442acc0  addiu       $v0, $v0, -0x5340
    ctx->pc = 0x172314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945984));
    // 0x172318: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x172318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    // 0x17231c: 0x8e2400ac  lw          $a0, 0xAC($s1)
    ctx->pc = 0x17231cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x172320: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172320u;
    {
        const bool branch_taken_0x172320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172320) {
            ctx->pc = 0x172338u;
            goto label_172338;
        }
    }
    ctx->pc = 0x172328u;
    // 0x172328: 0xc04018c  jal         func_100630
    ctx->pc = 0x172328u;
    SET_GPR_U32(ctx, 31, 0x172330u);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x172328u, 0x172330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172330u;
label_172330:
    // 0x172330: 0xae2000ac  sw          $zero, 0xAC($s1)
    ctx->pc = 0x172330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
    // 0x172334: 0xae2000a8  sw          $zero, 0xA8($s1)
    ctx->pc = 0x172334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
label_172338:
    // 0x172338: 0x26220098  addiu       $v0, $s1, 0x98
    ctx->pc = 0x172338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
label_17233c:
    // 0x17233c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17233Cu;
    {
        const bool branch_taken_0x17233c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17233Cu;
        // 0x172340: 0x26220088  addiu       $v0, $s1, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17233c) {
            ctx->pc = 0x172370u;
            goto label_172370;
        }
    }
    ctx->pc = 0x172344u;
    // 0x172344: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x172344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x172348: 0x2442acc0  addiu       $v0, $v0, -0x5340
    ctx->pc = 0x172348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945984));
    // 0x17234c: 0xae2200a4  sw          $v0, 0xA4($s1)
    ctx->pc = 0x17234cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
    // 0x172350: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x172350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x172354: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172354u;
    {
        const bool branch_taken_0x172354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172354) {
            ctx->pc = 0x17236Cu;
            goto label_17236c;
        }
    }
    ctx->pc = 0x17235Cu;
    // 0x17235c: 0xc04018c  jal         func_100630
    ctx->pc = 0x17235Cu;
    SET_GPR_U32(ctx, 31, 0x172364u);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x17235Cu, 0x172364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172364u;
label_172364:
    // 0x172364: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x172364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
    // 0x172368: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x172368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
label_17236c:
    // 0x17236c: 0x26220088  addiu       $v0, $s1, 0x88
    ctx->pc = 0x17236cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
label_172370:
    // 0x172370: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x172370u;
    {
        const bool branch_taken_0x172370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172370u;
        // 0x172374: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172370) {
            ctx->pc = 0x1723A4u;
            goto label_1723a4;
        }
    }
    ctx->pc = 0x172378u;
    // 0x172378: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x172378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17237c: 0x2442acc0  addiu       $v0, $v0, -0x5340
    ctx->pc = 0x17237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945984));
    // 0x172380: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x172380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    // 0x172384: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x172384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x172388: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172388u;
    {
        const bool branch_taken_0x172388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172388) {
            ctx->pc = 0x1723A0u;
            goto label_1723a0;
        }
    }
    ctx->pc = 0x172390u;
    // 0x172390: 0xc04018c  jal         func_100630
    ctx->pc = 0x172390u;
    SET_GPR_U32(ctx, 31, 0x172398u);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x172390u, 0x172398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172398u;
label_172398:
    // 0x172398: 0xae20008c  sw          $zero, 0x8C($s1)
    ctx->pc = 0x172398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
    // 0x17239c: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x17239cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_1723a0:
    // 0x1723a0: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x1723a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_1723a4:
    // 0x1723a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1723A4u;
    {
        const bool branch_taken_0x1723a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1723A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1723A4u;
        // 0x1723a8: 0x26220068  addiu       $v0, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1723a4) {
            ctx->pc = 0x1723D8u;
            goto label_1723d8;
        }
    }
    ctx->pc = 0x1723ACu;
    // 0x1723ac: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1723acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1723b0: 0x2442acc0  addiu       $v0, $v0, -0x5340
    ctx->pc = 0x1723b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945984));
    // 0x1723b4: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x1723b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
    // 0x1723b8: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x1723b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x1723bc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1723BCu;
    {
        const bool branch_taken_0x1723bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1723bc) {
            ctx->pc = 0x1723D4u;
            goto label_1723d4;
        }
    }
    ctx->pc = 0x1723C4u;
    // 0x1723c4: 0xc04018c  jal         func_100630
    ctx->pc = 0x1723C4u;
    SET_GPR_U32(ctx, 31, 0x1723CCu);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1723C4u, 0x1723CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1723CCu;
label_1723cc:
    // 0x1723cc: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x1723ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
    // 0x1723d0: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x1723d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
label_1723d4:
    // 0x1723d4: 0x26220068  addiu       $v0, $s1, 0x68
    ctx->pc = 0x1723d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
label_1723d8:
    // 0x1723d8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1723D8u;
    {
        const bool branch_taken_0x1723d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1723DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1723D8u;
        // 0x1723dc: 0x26220058  addiu       $v0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1723d8) {
            ctx->pc = 0x17240Cu;
            goto label_17240c;
        }
    }
    ctx->pc = 0x1723E0u;
    // 0x1723e0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1723e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1723e4: 0x2442acc0  addiu       $v0, $v0, -0x5340
    ctx->pc = 0x1723e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945984));
    // 0x1723e8: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x1723e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x1723ec: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x1723ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x1723f0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1723F0u;
    {
        const bool branch_taken_0x1723f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1723f0) {
            ctx->pc = 0x172408u;
            goto label_172408;
        }
    }
    ctx->pc = 0x1723F8u;
    // 0x1723f8: 0xc04018c  jal         func_100630
    ctx->pc = 0x1723F8u;
    SET_GPR_U32(ctx, 31, 0x172400u);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1723F8u, 0x172400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172400u;
label_172400:
    // 0x172400: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x172400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    // 0x172404: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x172404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
label_172408:
    // 0x172408: 0x26220058  addiu       $v0, $s1, 0x58
    ctx->pc = 0x172408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_17240c:
    // 0x17240c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17240Cu;
    {
        const bool branch_taken_0x17240c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17240Cu;
        // 0x172410: 0x26220048  addiu       $v0, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17240c) {
            ctx->pc = 0x172440u;
            goto label_172440;
        }
    }
    ctx->pc = 0x172414u;
    // 0x172414: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x172414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x172418: 0x2442acc0  addiu       $v0, $v0, -0x5340
    ctx->pc = 0x172418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945984));
    // 0x17241c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x17241cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x172420: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x172420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x172424: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172424u;
    {
        const bool branch_taken_0x172424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172424) {
            ctx->pc = 0x17243Cu;
            goto label_17243c;
        }
    }
    ctx->pc = 0x17242Cu;
    // 0x17242c: 0xc04018c  jal         func_100630
    ctx->pc = 0x17242Cu;
    SET_GPR_U32(ctx, 31, 0x172434u);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x17242Cu, 0x172434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172434u;
label_172434:
    // 0x172434: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x172434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x172438: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x172438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_17243c:
    // 0x17243c: 0x26220048  addiu       $v0, $s1, 0x48
    ctx->pc = 0x17243cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
label_172440:
    // 0x172440: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x172440u;
    {
        const bool branch_taken_0x172440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172440u;
        // 0x172444: 0x26220014  addiu       $v0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172440) {
            ctx->pc = 0x172474u;
            goto label_172474;
        }
    }
    ctx->pc = 0x172448u;
    // 0x172448: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x172448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17244c: 0x2442acc0  addiu       $v0, $v0, -0x5340
    ctx->pc = 0x17244cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945984));
    // 0x172450: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x172450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x172454: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x172454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x172458: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172458u;
    {
        const bool branch_taken_0x172458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172458) {
            ctx->pc = 0x172470u;
            goto label_172470;
        }
    }
    ctx->pc = 0x172460u;
    // 0x172460: 0xc04018c  jal         func_100630
    ctx->pc = 0x172460u;
    SET_GPR_U32(ctx, 31, 0x172468u);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x172460u, 0x172468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172468u;
label_172468:
    // 0x172468: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x172468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x17246c: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x17246cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_172470:
    // 0x172470: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x172470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_172474:
    // 0x172474: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x172474u;
    {
        const bool branch_taken_0x172474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172474u;
        // 0x172478: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172474) {
            ctx->pc = 0x1724D4u;
            goto label_1724d4;
        }
    }
    ctx->pc = 0x17247Cu;
    // 0x17247c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17247cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x172480: 0x2442acb0  addiu       $v0, $v0, -0x5350
    ctx->pc = 0x172480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945968));
    // 0x172484: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x172484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x172488: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x172488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x17248c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17248Cu;
    {
        const bool branch_taken_0x17248c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17248c) {
            ctx->pc = 0x1724D0u;
            goto label_1724d0;
        }
    }
    ctx->pc = 0x172494u;
    // 0x172494: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x172494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x172498: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x172498u;
    {
        const bool branch_taken_0x172498 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172498) {
            ctx->pc = 0x1724A8u;
            goto label_1724a8;
        }
    }
    ctx->pc = 0x1724A0u;
    // 0x1724a0: 0xc040150  jal         func_100540
    ctx->pc = 0x1724A0u;
    SET_GPR_U32(ctx, 31, 0x1724A8u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x1724A0u, 0x1724A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1724A8u;
label_1724a8:
    // 0x1724a8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1724a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1724ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1724ACu;
    {
        const bool branch_taken_0x1724ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1724ac) {
            ctx->pc = 0x1724BCu;
            goto label_1724bc;
        }
    }
    ctx->pc = 0x1724B4u;
    // 0x1724b4: 0xc040150  jal         func_100540
    ctx->pc = 0x1724B4u;
    SET_GPR_U32(ctx, 31, 0x1724BCu);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x1724B4u, 0x1724BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1724BCu;
label_1724bc:
    // 0x1724bc: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1724bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1724c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1724C0u;
    {
        const bool branch_taken_0x1724c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1724c0) {
            ctx->pc = 0x1724D0u;
            goto label_1724d0;
        }
    }
    ctx->pc = 0x1724C8u;
    // 0x1724c8: 0xc040150  jal         func_100540
    ctx->pc = 0x1724C8u;
    SET_GPR_U32(ctx, 31, 0x1724D0u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x1724C8u, 0x1724D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1724D0u;
label_1724d0:
    // 0x1724d0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1724d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1724d4:
    // 0x1724d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1724d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1724d8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1724D8u;
    {
        const bool branch_taken_0x1724d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1724DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1724D8u;
        // 0x1724dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1724d8) {
            ctx->pc = 0x1724ECu;
            goto label_1724ec;
        }
    }
    ctx->pc = 0x1724E0u;
    // 0x1724e0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1724E0u;
    SET_GPR_U32(ctx, 31, 0x1724E8u);
    ctx->pc = 0x1724E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1724E0u;
    // 0x1724e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1724E0u, 0x1724E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1724E8u;
label_1724e8:
    // 0x1724e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1724e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1724ec:
    // 0x1724ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1724ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1724f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1724f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1724f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1724f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1724f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1724F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1724FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1724F8u;
        // 0x1724fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1724F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172500u;
}
