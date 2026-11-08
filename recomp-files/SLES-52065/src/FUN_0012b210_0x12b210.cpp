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

// Function: FUN_0012b210
// Address: 0x12b210 - 0x12b258
void FUN_0012b210_0x12b210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012b210_0x12b210");
#endif

    switch (ctx->pc) {
        case 0x12b224u: goto label_12b224;
        default: break;
    }

    ctx->pc = 0x12b210u;

    // 0x12b210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12b214: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12b214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12b218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12b218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12b21c: 0xc04a814  jal         func_12A050
    ctx->pc = 0x12B21Cu;
    SET_GPR_U32(ctx, 31, 0x12B224u);
    ctx->pc = 0x12B220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B21Cu;
    // 0x12b220: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A050u, 0x12B21Cu, 0x12B224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B224u;
label_12b224:
    // 0x12b224: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x12b224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x12b228: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x12b228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12b22c: 0x24428b60  addiu       $v0, $v0, -0x74A0
    ctx->pc = 0x12b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937440));
    // 0x12b230: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12b230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b234: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x12b234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x12b238: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x12b238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x12b23c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12b23cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b240: 0xae040024  sw          $a0, 0x24($s0)
    ctx->pc = 0x12b240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
    // 0x12b244: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x12b244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x12b248: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12b248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b24c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12b24cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b250: 0x3e00008  jr          $ra
    ctx->pc = 0x12B250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B250u;
        // 0x12b254: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B258u;
}
