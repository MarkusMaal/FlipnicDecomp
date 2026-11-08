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

// Function: entry_00180254
// Address: 0x180254 - 0x1802f4
void entry_00180254_0x180254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180254_0x180254");
#endif

    switch (ctx->pc) {
        case 0x180268u: goto label_180268;
        case 0x180274u: goto label_180274;
        case 0x18027cu: goto label_18027c;
        case 0x180288u: goto label_180288;
        case 0x180290u: goto label_180290;
        case 0x18029cu: goto label_18029c;
        case 0x1802c0u: goto label_1802c0;
        case 0x1802d8u: goto label_1802d8;
        case 0x1802ecu: goto label_1802ec;
        default: break;
    }

    ctx->pc = 0x180254u;

label_180254:
    // 0x180254: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x180254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_180258:
    // 0x180258: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x180258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18025c:
    // 0x18025c: 0x8f3900f8  lw          $t9, 0xF8($t9)
    ctx->pc = 0x18025cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 248)));
label_180260:
    // 0x180260: 0x320f809  jalr        $t9
label_180264:
    if (ctx->pc == 0x180264u) {
        ctx->pc = 0x180268u;
        goto label_180268;
    }
    ctx->pc = 0x180260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x180268u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180260u, 0x180268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180268u;
label_180268:
    // 0x180268: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x180268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18026c:
    // 0x18026c: 0xc080702  jal         func_201C08
label_180270:
    if (ctx->pc == 0x180270u) {
        ctx->pc = 0x180270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18026Cu;
        // 0x180270: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180274u;
        goto label_180274;
    }
    ctx->pc = 0x18026Cu;
    SET_GPR_U32(ctx, 31, 0x180274u);
    ctx->pc = 0x180270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18026Cu;
    // 0x180270: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x18026Cu, 0x180274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180274u;
label_180274:
    // 0x180274: 0xc080d98  jal         func_203660
label_180278:
    if (ctx->pc == 0x180278u) {
        ctx->pc = 0x180278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180274u;
        // 0x180278: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18027Cu;
        goto label_18027c;
    }
    ctx->pc = 0x180274u;
    SET_GPR_U32(ctx, 31, 0x18027Cu);
    ctx->pc = 0x180278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180274u;
    // 0x180278: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203660u, 0x180274u, 0x18027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18027Cu;
label_18027c:
    // 0x18027c: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x18027cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_180280:
    // 0x180280: 0xc080702  jal         func_201C08
label_180284:
    if (ctx->pc == 0x180284u) {
        ctx->pc = 0x180284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180280u;
        // 0x180284: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180288u;
        goto label_180288;
    }
    ctx->pc = 0x180280u;
    SET_GPR_U32(ctx, 31, 0x180288u);
    ctx->pc = 0x180284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180280u;
    // 0x180284: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x180280u, 0x180288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180288u;
label_180288:
    // 0x180288: 0xc080d98  jal         func_203660
label_18028c:
    if (ctx->pc == 0x18028Cu) {
        ctx->pc = 0x18028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180288u;
        // 0x18028c: 0x27a40440  addiu       $a0, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180290u;
        goto label_180290;
    }
    ctx->pc = 0x180288u;
    SET_GPR_U32(ctx, 31, 0x180290u);
    ctx->pc = 0x18028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180288u;
    // 0x18028c: 0x27a40440  addiu       $a0, $sp, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203660u, 0x180288u, 0x180290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180290u;
label_180290:
    // 0x180290: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x180290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_180294:
    // 0x180294: 0xc080874  jal         func_2021D0
label_180298:
    if (ctx->pc == 0x180298u) {
        ctx->pc = 0x180298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180294u;
        // 0x180298: 0x27a50440  addiu       $a1, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18029Cu;
        goto label_18029c;
    }
    ctx->pc = 0x180294u;
    SET_GPR_U32(ctx, 31, 0x18029Cu);
    ctx->pc = 0x180298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180294u;
    // 0x180298: 0x27a50440  addiu       $a1, $sp, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x180294u, 0x18029Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18029Cu;
label_18029c:
    // 0x18029c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1802a0:
    if (ctx->pc == 0x1802A0u) {
        ctx->pc = 0x1802A4u;
        goto label_1802a4;
    }
    ctx->pc = 0x18029Cu;
    {
        const bool branch_taken_0x18029c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18029c) {
            ctx->pc = 0x1802F4u;
            return;
        }
    }
    ctx->pc = 0x1802A4u;
label_1802a4:
    // 0x1802a4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1802a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1802a8:
    // 0x1802a8: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1802a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_1802ac:
    // 0x1802ac: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1802acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1802b0:
    // 0x1802b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1802b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1802b4:
    // 0x1802b4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1802b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1802b8:
    // 0x1802b8: 0x320f809  jalr        $t9
label_1802bc:
    if (ctx->pc == 0x1802BCu) {
        ctx->pc = 0x1802BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802B8u;
        // 0x1802bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1802C0u;
        goto label_1802c0;
    }
    ctx->pc = 0x1802B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1802C0u);
        ctx->pc = 0x1802BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802B8u;
        // 0x1802bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1802B8u, 0x1802C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1802C0u;
label_1802c0:
    // 0x1802c0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1802c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1802c4:
    // 0x1802c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1802c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1802c8:
    // 0x1802c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1802c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1802cc:
    // 0x1802cc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1802ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1802d0:
    // 0x1802d0: 0x320f809  jalr        $t9
label_1802d4:
    if (ctx->pc == 0x1802D4u) {
        ctx->pc = 0x1802D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802D0u;
        // 0x1802d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1802D8u;
        goto label_1802d8;
    }
    ctx->pc = 0x1802D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1802D8u);
        ctx->pc = 0x1802D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802D0u;
        // 0x1802d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1802D0u, 0x1802D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1802D8u;
label_1802d8:
    // 0x1802d8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1802d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1802dc:
    // 0x1802dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1802dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1802e0:
    // 0x1802e0: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x1802e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_1802e4:
    // 0x1802e4: 0x320f809  jalr        $t9
label_1802e8:
    if (ctx->pc == 0x1802E8u) {
        ctx->pc = 0x1802E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802E4u;
        // 0x1802e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1802ECu;
        goto label_1802ec;
    }
    ctx->pc = 0x1802E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1802ECu);
        ctx->pc = 0x1802E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802E4u;
        // 0x1802e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1802E4u, 0x1802ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1802ECu;
label_1802ec:
    // 0x1802ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_1802f0:
    if (ctx->pc == 0x1802F0u) {
        ctx->pc = 0x1802F4u;
        goto label_fallthrough_0x1802ec;
    }
    ctx->pc = 0x1802ECu;
    {
        const bool branch_taken_0x1802ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1802ec) {
            ctx->pc = 0x180300u;
            return;
        }
    }
label_fallthrough_0x1802ec:
    ctx->pc = 0x1802F4u;
}
