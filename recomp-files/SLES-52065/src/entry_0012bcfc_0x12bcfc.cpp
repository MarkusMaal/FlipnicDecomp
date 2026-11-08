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

// Function: entry_0012bcfc
// Address: 0x12bcfc - 0x12bd2c
void entry_0012bcfc_0x12bcfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bcfc_0x12bcfc");
#endif

    switch (ctx->pc) {
        case 0x12bd08u: goto label_12bd08;
        case 0x12bd1cu: goto label_12bd1c;
        default: break;
    }

    ctx->pc = 0x12bcfcu;

    // 0x12bcfc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12bd00: 0xc040168  jal         func_1005A0
    ctx->pc = 0x12BD00u;
    SET_GPR_U32(ctx, 31, 0x12BD08u);
    ctx->pc = 0x12BD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BD00u;
    // 0x12bd04: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x12BD00u, 0x12BD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD08u;
label_12bd08:
    // 0x12bd08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x12bd08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12bd0c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x12bd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x12bd10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12bd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bd14: 0xc04af4c  jal         func_12BD30
    ctx->pc = 0x12BD14u;
    SET_GPR_U32(ctx, 31, 0x12BD1Cu);
    ctx->pc = 0x12BD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BD14u;
    // 0x12bd18: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BD30u, 0x12BD14u, 0x12BD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD1Cu;
label_12bd1c:
    // 0x12bd1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12bd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bd20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12bd20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bd24: 0x3e00008  jr          $ra
    ctx->pc = 0x12BD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD24u;
        // 0x12bd28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BD2Cu;
}
