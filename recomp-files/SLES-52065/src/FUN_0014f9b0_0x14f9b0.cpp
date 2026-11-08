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

// Function: FUN_0014f9b0
// Address: 0x14f9b0 - 0x14fa44
void FUN_0014f9b0_0x14f9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014f9b0_0x14f9b0");
#endif

    switch (ctx->pc) {
        case 0x14f9c8u: goto label_14f9c8;
        case 0x14fa2cu: goto label_14fa2c;
        default: break;
    }

    ctx->pc = 0x14f9b0u;

    // 0x14f9b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14f9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14f9b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14f9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14f9b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14f9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14f9bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14f9bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f9c0: 0xc04de44  jal         func_137910
    ctx->pc = 0x14F9C0u;
    SET_GPR_U32(ctx, 31, 0x14F9C8u);
    ctx->pc = 0x14F9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F9C0u;
    // 0x14f9c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137910u, 0x14F9C0u, 0x14F9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F9C8u;
label_14f9c8:
    // 0x14f9c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14f9c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f9cc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x14f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14f9d0: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x14f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x14f9d4: 0xae2201a0  sw          $v0, 0x1A0($s1)
    ctx->pc = 0x14f9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
    // 0x14f9d8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x14f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14f9dc: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x14f9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x14f9e0: 0xdc620040  ld          $v0, 0x40($v1)
    ctx->pc = 0x14f9e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x14f9e4: 0xfe220160  sd          $v0, 0x160($s1)
    ctx->pc = 0x14f9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 352), GPR_U64(ctx, 2));
    // 0x14f9e8: 0xdc620048  ld          $v0, 0x48($v1)
    ctx->pc = 0x14f9e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x14f9ec: 0xfe220168  sd          $v0, 0x168($s1)
    ctx->pc = 0x14f9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 360), GPR_U64(ctx, 2));
    // 0x14f9f0: 0xdc620050  ld          $v0, 0x50($v1)
    ctx->pc = 0x14f9f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x14f9f4: 0xfe220170  sd          $v0, 0x170($s1)
    ctx->pc = 0x14f9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 368), GPR_U64(ctx, 2));
    // 0x14f9f8: 0xdc620058  ld          $v0, 0x58($v1)
    ctx->pc = 0x14f9f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x14f9fc: 0xfe220178  sd          $v0, 0x178($s1)
    ctx->pc = 0x14f9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 376), GPR_U64(ctx, 2));
    // 0x14fa00: 0xdc620060  ld          $v0, 0x60($v1)
    ctx->pc = 0x14fa00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x14fa04: 0xfe220180  sd          $v0, 0x180($s1)
    ctx->pc = 0x14fa04u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 384), GPR_U64(ctx, 2));
    // 0x14fa08: 0xdc620068  ld          $v0, 0x68($v1)
    ctx->pc = 0x14fa08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x14fa0c: 0xfe220188  sd          $v0, 0x188($s1)
    ctx->pc = 0x14fa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 392), GPR_U64(ctx, 2));
    // 0x14fa10: 0xdc620070  ld          $v0, 0x70($v1)
    ctx->pc = 0x14fa10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x14fa14: 0xfe220190  sd          $v0, 0x190($s1)
    ctx->pc = 0x14fa14u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 400), GPR_U64(ctx, 2));
    // 0x14fa18: 0xdc620078  ld          $v0, 0x78($v1)
    ctx->pc = 0x14fa18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x14fa1c: 0xfe220198  sd          $v0, 0x198($s1)
    ctx->pc = 0x14fa1cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 408), GPR_U64(ctx, 2));
    // 0x14fa20: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x14fa20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14fa24: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x14FA24u;
    SET_GPR_U32(ctx, 31, 0x14FA2Cu);
    ctx->pc = 0x14FA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FA24u;
    // 0x14fa28: 0x262400b0  addiu       $a0, $s1, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x14FA24u, 0x14FA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FA2Cu;
label_14fa2c:
    // 0x14fa2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14fa2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14fa30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14fa34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14fa34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14fa38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14fa38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14fa3c: 0x3e00008  jr          $ra
    ctx->pc = 0x14FA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA3Cu;
        // 0x14fa40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FA44u;
}
