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

// Function: FUN_001f21d0
// Address: 0x1f21d0 - 0x1f23b0
void FUN_001f21d0_0x1f21d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f21d0_0x1f21d0");
#endif

    switch (ctx->pc) {
        case 0x1f220cu: goto label_1f220c;
        case 0x1f2224u: goto label_1f2224;
        case 0x1f2248u: goto label_1f2248;
        case 0x1f22a8u: goto label_1f22a8;
        case 0x1f22f4u: goto label_1f22f4;
        case 0x1f2330u: goto label_1f2330;
        case 0x1f2340u: goto label_1f2340;
        case 0x1f2348u: goto label_1f2348;
        case 0x1f235cu: goto label_1f235c;
        case 0x1f236cu: goto label_1f236c;
        case 0x1f237cu: goto label_1f237c;
        case 0x1f2384u: goto label_1f2384;
        default: break;
    }

    ctx->pc = 0x1f21d0u;

    // 0x1f21d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1f21d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1f21d4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1f21d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1f21d8: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1f21d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1f21dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f21dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f21e0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1f21e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1f21e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f21e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f21e8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1f21e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1f21ec: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1f21ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1f21f0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1f21f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1f21f4: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x1f21f4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x1f21f8: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1f21f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1f21fc: 0x26d2e200  addiu       $s2, $s6, -0x1E00
    ctx->pc = 0x1f21fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959616));
    // 0x1f2200: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1f2200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1f2204: 0xc07bcfa  jal         func_1EF3E8
    ctx->pc = 0x1F2204u;
    SET_GPR_U32(ctx, 31, 0x1F220Cu);
    ctx->pc = 0x1F2208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2204u;
    // 0x1f2208: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF3E8u, 0x1F2204u, 0x1F220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F220Cu;
label_1f220c:
    // 0x1f220c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f220cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f2210: 0x8c43a45c  lw          $v1, -0x5BA4($v0)
    ctx->pc = 0x1f2210u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21A45Cu));
    // 0x1f2214: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2214u;
    {
        const bool branch_taken_0x1f2214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2214) {
            ctx->pc = 0x1F2218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2214u;
            // 0x1f2218: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2228u;
            goto label_1f2228;
        }
    }
    ctx->pc = 0x1F221Cu;
    // 0x1f221c: 0xc07bd3c  jal         func_1EF4F0
    ctx->pc = 0x1F221Cu;
    SET_GPR_U32(ctx, 31, 0x1F2224u);
    ctx->pc = 0x1EF4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF4F0u, 0x1F221Cu, 0x1F2224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2224u;
label_1f2224:
    // 0x1f2224: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f2224u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1f2228:
    // 0x1f2228: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f222c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1f222cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1f2230: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F2230u;
    {
        const bool branch_taken_0x1f2230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2230u;
        // 0x1f2234: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2230) {
            ctx->pc = 0x1F2274u;
            goto label_1f2274;
        }
    }
    ctx->pc = 0x1F2238u;
    // 0x1f2238: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1f2238u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f223c: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f223cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f2240: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f2240u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    // 0x1f2244: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f2244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1f2248:
    // 0x1f2248: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1f2248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f224c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F224Cu;
    {
        const bool branch_taken_0x1f224c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F224Cu;
        // 0x1f2250: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f224c) {
            ctx->pc = 0x1F2280u;
            goto label_1f2280;
        }
    }
    ctx->pc = 0x1F2254u;
    // 0x1f2254: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1f2254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1f2258: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f2258u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f225c: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1f225cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2260: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1f2260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1f2264: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F2264u;
    {
        const bool branch_taken_0x1f2264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2264) {
            ctx->pc = 0x1F2268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2264u;
            // 0x1f2268: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2248;
        }
    }
    ctx->pc = 0x1F226Cu;
    // 0x1f226c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F226Cu;
    {
        const bool branch_taken_0x1f226c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F226Cu;
        // 0x1f2270: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f226c) {
            ctx->pc = 0x1F2284u;
            goto label_1f2284;
        }
    }
    ctx->pc = 0x1F2274u;
label_1f2274:
    // 0x1f2274: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1f2274u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f2278: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f2278u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f227c: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f227cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
label_1f2280:
    // 0x1f2280: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1f2280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1f2284:
    // 0x1f2284: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F2284u;
    {
        const bool branch_taken_0x1f2284 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f2284) {
            ctx->pc = 0x1F2288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2284u;
            // 0x1f2288: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F228Cu;
            goto label_1f228c;
        }
    }
    ctx->pc = 0x1F228Cu;
label_1f228c:
    // 0x1f228c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f228cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f2290: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2294: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1f2294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1f2298: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F2298u;
    {
        const bool branch_taken_0x1f2298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2298u;
        // 0x1f229c: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2298) {
            ctx->pc = 0x1F22CCu;
            goto label_1f22cc;
        }
    }
    ctx->pc = 0x1F22A0u;
    // 0x1f22a0: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x1f22a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x1f22a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f22a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1f22a8:
    // 0x1f22a8: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1f22a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f22ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F22ACu;
    {
        const bool branch_taken_0x1f22ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F22B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22ACu;
        // 0x1f22b0: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f22ac) {
            ctx->pc = 0x1F22CCu;
            goto label_1f22cc;
        }
    }
    ctx->pc = 0x1F22B4u;
    // 0x1f22b4: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1f22b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1f22b8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f22b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f22bc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1f22bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f22c0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1f22c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1f22c4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F22C4u;
    {
        const bool branch_taken_0x1f22c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f22c4) {
            ctx->pc = 0x1F22C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F22C4u;
            // 0x1f22c8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F22A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f22a8;
        }
    }
    ctx->pc = 0x1F22CCu;
label_1f22cc:
    // 0x1f22cc: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1f22ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1f22d0: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F22D0u;
    {
        const bool branch_taken_0x1f22d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f22d0) {
            ctx->pc = 0x1F22D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F22D0u;
            // 0x1f22d4: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F22D8u;
            goto label_1f22d8;
        }
    }
    ctx->pc = 0x1F22D8u;
label_1f22d8:
    // 0x1f22d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f22d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f22dc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f22dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f22e0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f22e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1f22e4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f22e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f22e8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1f22e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1f22ec: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F22ECu;
    SET_GPR_U32(ctx, 31, 0x1F22F4u);
    ctx->pc = 0x1F22F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F22ECu;
    // 0x1f22f0: 0x2690ee40  addiu       $s0, $s4, -0x11C0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F22ECu, 0x1F22F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22F4u;
label_1f22f4:
    // 0x1f22f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f22f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f22f8: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1f22f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1f22fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f22fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f2300: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1f2300u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1f2304: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f2304u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f2308: 0x26a4f900  addiu       $a0, $s5, -0x700
    ctx->pc = 0x1f2308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965504));
    // 0x1f230c: 0x26c7e200  addiu       $a3, $s6, -0x1E00
    ctx->pc = 0x1f230cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959616));
    // 0x1f2310: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1f2310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1f2314: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f2314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f2318: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f231c: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x1f231cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x1f2320: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f2320u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2324: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f2324u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f2328: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F2328u;
    SET_GPR_U32(ctx, 31, 0x1F2330u);
    ctx->pc = 0x1F232Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2328u;
    // 0x1f232c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F2328u, 0x1F2330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2330u;
label_1f2330:
    // 0x1f2330: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F2330u;
    {
        const bool branch_taken_0x1f2330 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F2334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2330u;
        // 0x1f2334: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2330) {
            ctx->pc = 0x1F2350u;
            goto label_1f2350;
        }
    }
    ctx->pc = 0x1F2338u;
    // 0x1f2338: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F2338u;
    SET_GPR_U32(ctx, 31, 0x1F2340u);
    ctx->pc = 0x1F233Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2338u;
    // 0x1f233c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F2338u, 0x1F2340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2340u;
label_1f2340:
    // 0x1f2340: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F2340u;
    SET_GPR_U32(ctx, 31, 0x1F2348u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F2340u, 0x1F2348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2348u;
label_1f2348:
    // 0x1f2348: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F2348u;
    {
        const bool branch_taken_0x1f2348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2348u;
        // 0x1f234c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2348) {
            ctx->pc = 0x1F2388u;
            goto label_1f2388;
        }
    }
    ctx->pc = 0x1F2350u;
label_1f2350:
    // 0x1f2350: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1f2350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f2354: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F2354u;
    SET_GPR_U32(ctx, 31, 0x1F235Cu);
    ctx->pc = 0x1F2358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2354u;
    // 0x1f2358: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F2354u, 0x1F235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F235Cu;
label_1f235c:
    // 0x1f235c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F235Cu;
    {
        const bool branch_taken_0x1f235c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f235c) {
            ctx->pc = 0x1F2374u;
            goto label_1f2374;
        }
    }
    ctx->pc = 0x1F2364u;
    // 0x1f2364: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F2364u;
    SET_GPR_U32(ctx, 31, 0x1F236Cu);
    ctx->pc = 0x1F2368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2364u;
    // 0x1f2368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F2364u, 0x1F236Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F236Cu;
label_1f236c:
    // 0x1f236c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F236Cu;
    {
        const bool branch_taken_0x1f236c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F236Cu;
        // 0x1f2370: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f236c) {
            ctx->pc = 0x1F2388u;
            goto label_1f2388;
        }
    }
    ctx->pc = 0x1F2374u;
label_1f2374:
    // 0x1f2374: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F2374u;
    SET_GPR_U32(ctx, 31, 0x1F237Cu);
    ctx->pc = 0x1F2378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2374u;
    // 0x1f2378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F2374u, 0x1F237Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F237Cu;
label_1f237c:
    // 0x1f237c: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F237Cu;
    SET_GPR_U32(ctx, 31, 0x1F2384u);
    ctx->pc = 0x1F2380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F237Cu;
    // 0x1f2380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F237Cu, 0x1F2384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2384u;
label_1f2384:
    // 0x1f2384: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f2384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1f2388:
    // 0x1f2388: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1f2388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f238c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1f238cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f2390: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1f2390u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f2394: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1f2394u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f2398: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1f2398u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f239c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1f239cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f23a0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1f23a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f23a4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f23a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f23a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F23A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F23ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F23A8u;
        // 0x1f23ac: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F23A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F23B0u;
}
