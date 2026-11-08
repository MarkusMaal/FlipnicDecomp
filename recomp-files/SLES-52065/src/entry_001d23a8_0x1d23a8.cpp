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

// Function: entry_001d23a8
// Address: 0x1d23a8 - 0x1d2424
void entry_001d23a8_0x1d23a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d23a8_0x1d23a8");
#endif

    switch (ctx->pc) {
        case 0x1d23bcu: goto label_1d23bc;
        default: break;
    }

    ctx->pc = 0x1d23a8u;

    // 0x1d23a8: 0x922301e0  lbu         $v1, 0x1E0($s1)
    ctx->pc = 0x1d23a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x1d23ac: 0x146000df  bnez        $v1, . + 4 + (0xDF << 2)
    ctx->pc = 0x1D23ACu;
    {
        const bool branch_taken_0x1d23ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d23ac) {
            ctx->pc = 0x1D272Cu;
            return;
        }
    }
    ctx->pc = 0x1D23B4u;
    // 0x1d23b4: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1D23B4u;
    SET_GPR_U32(ctx, 31, 0x1D23BCu);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1D23B4u, 0x1D23BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D23BCu;
label_1d23bc:
    // 0x1d23bc: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1d23bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d23c0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d23c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d23c4: 0x8c25fef0  lw          $a1, -0x110($at)
    ctx->pc = 0x1d23c4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x36FEF0u));
    // 0x1d23c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d23c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d23cc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d23ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d23d0: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1d23d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1d23d4: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x1d23d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
    // 0x1d23d8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1d23d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d23dc: 0x10a30026  beq         $a1, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1D23DCu;
    {
        const bool branch_taken_0x1d23dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D23E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23DCu;
        // 0x1d23e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23dc) {
            ctx->pc = 0x1D2478u;
            return;
        }
    }
    ctx->pc = 0x1D23E4u;
    // 0x1d23e4: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1d23e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1d23e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d23e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d23ec: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1d23ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1d23f0: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x1d23f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1d23f4: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1D23F4u;
    {
        const bool branch_taken_0x1d23f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d23f4) {
            ctx->pc = 0x1D2478u;
            return;
        }
    }
    ctx->pc = 0x1D23FCu;
    // 0x1d23fc: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D23FCu;
    {
        const bool branch_taken_0x1d23fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d23fc) {
            ctx->pc = 0x1D2424u;
            return;
        }
    }
    ctx->pc = 0x1D2404u;
    // 0x1d2404: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1d2404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d2408: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D2408u;
    {
        const bool branch_taken_0x1d2408 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d2408) {
            ctx->pc = 0x1D2424u;
            return;
        }
    }
    ctx->pc = 0x1D2410u;
    // 0x1d2410: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d2410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d2414: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2414u;
    {
        const bool branch_taken_0x1d2414 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d2414) {
            ctx->pc = 0x1D2424u;
            return;
        }
    }
    ctx->pc = 0x1D241Cu;
    // 0x1d241c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D241Cu;
    {
        const bool branch_taken_0x1d241c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D241Cu;
        // 0x1d2420: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d241c) {
            ctx->pc = 0x1D247Cu;
            return;
        }
    }
    ctx->pc = 0x1D2424u;
}
