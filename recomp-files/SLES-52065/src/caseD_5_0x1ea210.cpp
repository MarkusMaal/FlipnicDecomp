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

// Function: caseD_5
// Address: 0x1ea210 - 0x1ea280
void caseD_5_0x1ea210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1ea210");
#endif

    switch (ctx->pc) {
        case 0x1ea21cu: goto label_1ea21c;
        case 0x1ea228u: goto label_1ea228;
        case 0x1ea234u: goto label_1ea234;
        default: break;
    }

    ctx->pc = 0x1ea210u;

    // 0x1ea210: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ea214: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA214u;
    SET_GPR_U32(ctx, 31, 0x1EA21Cu);
    ctx->pc = 0x1EA218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA214u;
    // 0x1ea218: 0x27a500b8  addiu       $a1, $sp, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA214u, 0x1EA21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA21Cu;
label_1ea21c:
    // 0x1ea21c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea220: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EA220u;
    SET_GPR_U32(ctx, 31, 0x1EA228u);
    ctx->pc = 0x1EA224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA220u;
    // 0x1ea224: 0x27a500b4  addiu       $a1, $sp, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EA220u, 0x1EA228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA228u;
label_1ea228:
    // 0x1ea228: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea22c: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EA22Cu;
    SET_GPR_U32(ctx, 31, 0x1EA234u);
    ctx->pc = 0x1EA230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA22Cu;
    // 0x1ea230: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EA22Cu, 0x1EA234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA234u;
label_1ea234:
    // 0x1ea234: 0x90480001  lbu         $t0, 0x1($v0)
    ctx->pc = 0x1ea234u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1ea238: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x1ea238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ea23c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1ea23cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea240: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x1ea240u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1ea244: 0x90460003  lbu         $a2, 0x3($v0)
    ctx->pc = 0x1ea244u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1ea248: 0x8fb100b4  lw          $s1, 0xB4($sp)
    ctx->pc = 0x1ea248u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1ea24c: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x1ea24cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1ea250: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1ea250u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1ea254: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1ea254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1ea258: 0x684025  or          $t0, $v1, $t0
    ctx->pc = 0x1ea258u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x1ea25c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1ea25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ea260: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1ea260u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1ea264: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1ea264u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1ea268: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1ea268u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1ea26c: 0xc7b025  or          $s6, $a2, $a3
    ctx->pc = 0x1ea26cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1ea270: 0xa4a821  addu        $s5, $a1, $a0
    ctx->pc = 0x1ea270u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1ea274: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1ea274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ea278: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EA278u;
    {
        const bool branch_taken_0x1ea278 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA278u;
        // 0x1ea27c: 0x2a3a821  addu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea278) {
            ctx->pc = 0x1EA2A0u;
            return;
        }
    }
    ctx->pc = 0x1EA280u;
}
