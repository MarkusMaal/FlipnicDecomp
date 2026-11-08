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

// Function: FUN_001bc5c0
// Address: 0x1bc5c0 - 0x1bc638
void FUN_001bc5c0_0x1bc5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bc5c0_0x1bc5c0");
#endif

    switch (ctx->pc) {
        case 0x1bc5e4u: goto label_1bc5e4;
        case 0x1bc5fcu: goto label_1bc5fc;
        case 0x1bc614u: goto label_1bc614;
        case 0x1bc620u: goto label_1bc620;
        default: break;
    }

    ctx->pc = 0x1bc5c0u;

    // 0x1bc5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bc5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bc5c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bc5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bc5c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bc5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bc5cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bc5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bc5d0: 0x8c23f4d8  lw          $v1, -0xB28($at)
    ctx->pc = 0x1bc5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F4D8u));
    // 0x1bc5d4: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BC5D4u;
    {
        const bool branch_taken_0x1bc5d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC5D4u;
        // 0x1bc5d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc5d4) {
            ctx->pc = 0x1BC620u;
            goto label_1bc620;
        }
    }
    ctx->pc = 0x1BC5DCu;
    // 0x1bc5dc: 0xc045f20  jal         func_117C80
    ctx->pc = 0x1BC5DCu;
    SET_GPR_U32(ctx, 31, 0x1BC5E4u);
    ctx->pc = 0x1BC5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC5DCu;
    // 0x1bc5e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C80u, 0x1BC5DCu, 0x1BC5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC5E4u;
label_1bc5e4:
    // 0x1bc5e4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1bc5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1bc5e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bc5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bc5ec: 0x248411a0  addiu       $a0, $a0, 0x11A0
    ctx->pc = 0x1bc5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4512));
    // 0x1bc5f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bc5f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc5f4: 0xc060020  jal         func_180080
    ctx->pc = 0x1BC5F4u;
    SET_GPR_U32(ctx, 31, 0x1BC5FCu);
    ctx->pc = 0x1BC5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC5F4u;
    // 0x1bc5f8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180080u, 0x1BC5F4u, 0x1BC5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC5FCu;
label_1bc5fc:
    // 0x1bc5fc: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bc5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bc600: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bc600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc604: 0x24a53040  addiu       $a1, $a1, 0x3040
    ctx->pc = 0x1bc604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12352));
    // 0x1bc608: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1bc608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1bc60c: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1BC60Cu;
    SET_GPR_U32(ctx, 31, 0x1BC614u);
    ctx->pc = 0x1BC610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC60Cu;
    // 0x1bc610: 0xa2000060  sb          $zero, 0x60($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1BC60Cu, 0x1BC614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC614u;
label_1bc614:
    // 0x1bc614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bc614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc618: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1BC618u;
    SET_GPR_U32(ctx, 31, 0x1BC620u);
    ctx->pc = 0x1BC61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC618u;
    // 0x1bc61c: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1BC618u, 0x1BC620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC620u;
label_1bc620:
    // 0x1bc620: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bc620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bc624: 0xac20f4d8  sw          $zero, -0xB28($at)
    ctx->pc = 0x1bc624u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36F4D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F4D8u, _value); } while (0);
    // 0x1bc628: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bc628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc62c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bc62cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc630: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC630u;
        // 0x1bc634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC638u;
}
