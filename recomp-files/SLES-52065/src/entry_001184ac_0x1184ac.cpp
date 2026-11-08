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

// Function: entry_001184ac
// Address: 0x1184ac - 0x118514
void entry_001184ac_0x1184ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001184ac_0x1184ac");
#endif

    switch (ctx->pc) {
        case 0x1184dcu: goto label_1184dc;
        case 0x1184fcu: goto label_1184fc;
        case 0x11850cu: goto label_11850c;
        default: break;
    }

    ctx->pc = 0x1184acu;

    // 0x1184ac: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x1184acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1184b0: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1184b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1184b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1184b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1184b8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1184b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1184bc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1184bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1184c0: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x1184c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1184c4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1184c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1184c8: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x1184c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1184cc: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x1184ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1184d0: 0x8e850020  lw          $a1, 0x20($s4)
    ctx->pc = 0x1184d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1184d4: 0xc046434  jal         func_1190D0
    ctx->pc = 0x1184D4u;
    SET_GPR_U32(ctx, 31, 0x1184DCu);
    ctx->pc = 0x1184D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1184D4u;
    // 0x1184d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1190D0u, 0x1184D4u, 0x1184DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1184DCu;
label_1184dc:
    // 0x1184dc: 0x8c550040  lw          $s5, 0x40($v0)
    ctx->pc = 0x1184dcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1184e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1184e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1184e4: 0x16a20013  bne         $s5, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1184E4u;
    {
        const bool branch_taken_0x1184e4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x1184e4) {
            ctx->pc = 0x118534u;
            return;
        }
    }
    ctx->pc = 0x1184ECu;
    // 0x1184ec: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1184ECu;
    {
        const bool branch_taken_0x1184ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1184ec) {
            ctx->pc = 0x118514u;
            return;
        }
    }
    ctx->pc = 0x1184F4u;
    // 0x1184f4: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1184F4u;
    SET_GPR_U32(ctx, 31, 0x1184FCu);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1184F4u, 0x1184FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1184FCu;
label_1184fc:
    // 0x1184fc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1184fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118500: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x118500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118504: 0xc062ba4  jal         func_18AE90
    ctx->pc = 0x118504u;
    SET_GPR_U32(ctx, 31, 0x11850Cu);
    ctx->pc = 0x118508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118504u;
    // 0x118508: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE90u, 0x118504u, 0x11850Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11850Cu;
label_11850c:
    // 0x11850c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11850Cu;
    {
        const bool branch_taken_0x11850c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11850Cu;
        // 0x118510: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11850c) {
            ctx->pc = 0x118550u;
            return;
        }
    }
    ctx->pc = 0x118514u;
}
