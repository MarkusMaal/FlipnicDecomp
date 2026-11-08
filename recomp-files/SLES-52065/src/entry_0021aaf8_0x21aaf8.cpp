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

// Function: entry_0021aaf8
// Address: 0x21aaf8 - 0x21ab38
void entry_0021aaf8_0x21aaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021aaf8_0x21aaf8");
#endif

    switch (ctx->pc) {
        case 0x21ab18u: goto label_21ab18;
        default: break;
    }

    ctx->pc = 0x21aaf8u;

    // 0x21aaf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21aaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21aafc: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x21aafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x21ab00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21ab00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ab04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21ab04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ab08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21ab08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21ab0c: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x21ab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x21ab10: 0xc01d07a  jal         func_0741E8
    ctx->pc = 0x21AB10u;
    SET_GPR_U32(ctx, 31, 0x21AB18u);
    ctx->pc = 0x21AB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AB10u;
    // 0x21ab14: 0x24844700  addiu       $a0, $a0, 0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x741E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x741E8u, 0x21AB10u, 0x21AB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AB18u;
label_21ab18:
    // 0x21ab18: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x21ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
    // 0x21ab1c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x21ab1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x21ab20: 0x3c0603ff  lui         $a2, 0x3FF
    ctx->pc = 0x21ab20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1023 << 16));
    // 0x21ab24: 0x3c070c00  lui         $a3, 0xC00
    ctx->pc = 0x21ab24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3072 << 16));
    // 0x21ab28: 0x24434780  addiu       $v1, $v0, 0x4780
    ctx->pc = 0x21ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 18304));
    // 0x21ab2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21ab2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ab30: 0x34a5c402  ori         $a1, $a1, 0xC402
    ctx->pc = 0x21ab30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50178);
    // 0x21ab34: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x21ab34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x21ab38u;
}
