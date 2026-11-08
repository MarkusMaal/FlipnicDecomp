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

// Function: entry_0011823c
// Address: 0x11823c - 0x1182b4
void entry_0011823c_0x11823c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011823c_0x11823c");
#endif

    switch (ctx->pc) {
        case 0x118280u: goto label_118280;
        case 0x118298u: goto label_118298;
        case 0x1182a0u: goto label_1182a0;
        case 0x1182acu: goto label_1182ac;
        default: break;
    }

    ctx->pc = 0x11823cu;

    // 0x11823c: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x11823cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x118240: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x118240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x118244: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x118244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x118248: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x118248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11824c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x11824cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x118250: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x118250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x118254: 0x8463000a  lh          $v1, 0xA($v1)
    ctx->pc = 0x118254u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x118258: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x118258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x11825c: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x11825cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x118260: 0x83a021  addu        $s4, $a0, $v1
    ctx->pc = 0x118260u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x118264: 0x8e950040  lw          $s5, 0x40($s4)
    ctx->pc = 0x118264u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x118268: 0x16a2001a  bne         $s5, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x118268u;
    {
        const bool branch_taken_0x118268 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x118268) {
            ctx->pc = 0x1182D4u;
            return;
        }
    }
    ctx->pc = 0x118270u;
    // 0x118270: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x118270u;
    {
        const bool branch_taken_0x118270 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x118270) {
            ctx->pc = 0x1182B4u;
            return;
        }
    }
    ctx->pc = 0x118278u;
    // 0x118278: 0xc062d50  jal         func_18B540
    ctx->pc = 0x118278u;
    SET_GPR_U32(ctx, 31, 0x118280u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x118278u, 0x118280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118280u;
label_118280:
    // 0x118280: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x118280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118284: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x118284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118288: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x118288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11828c: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x11828cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x118290: 0xc062a44  jal         func_18A910
    ctx->pc = 0x118290u;
    SET_GPR_U32(ctx, 31, 0x118298u);
    ctx->pc = 0x118294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118290u;
    // 0x118294: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A910u, 0x118290u, 0x118298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118298u;
label_118298:
    // 0x118298: 0xc062d50  jal         func_18B540
    ctx->pc = 0x118298u;
    SET_GPR_U32(ctx, 31, 0x1182A0u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x118298u, 0x1182A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1182A0u;
label_1182a0:
    // 0x1182a0: 0x8e850040  lw          $a1, 0x40($s4)
    ctx->pc = 0x1182a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x1182a4: 0xc062b48  jal         func_18AD20
    ctx->pc = 0x1182A4u;
    SET_GPR_U32(ctx, 31, 0x1182ACu);
    ctx->pc = 0x1182A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1182A4u;
    // 0x1182a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD20u, 0x1182A4u, 0x1182ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1182ACu;
label_1182ac:
    // 0x1182ac: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1182ACu;
    {
        const bool branch_taken_0x1182ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1182B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1182ACu;
        // 0x1182b0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1182ac) {
            ctx->pc = 0x11830Cu;
            return;
        }
    }
    ctx->pc = 0x1182B4u;
}
