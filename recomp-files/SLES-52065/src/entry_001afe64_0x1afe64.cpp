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

// Function: entry_001afe64
// Address: 0x1afe64 - 0x1afeb0
void entry_001afe64_0x1afe64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afe64_0x1afe64");
#endif

    switch (ctx->pc) {
        case 0x1afe70u: goto label_1afe70;
        default: break;
    }

    ctx->pc = 0x1afe64u;

    // 0x1afe64: 0x0  nop
    ctx->pc = 0x1afe64u;
    // NOP
    // 0x1afe68: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1AFE68u;
    SET_GPR_U32(ctx, 31, 0x1AFE70u);
    ctx->pc = 0x1AFE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE68u;
    // 0x1afe6c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1AFE68u, 0x1AFE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFE70u;
label_1afe70:
    // 0x1afe70: 0x24030180  addiu       $v1, $zero, 0x180
    ctx->pc = 0x1afe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1afe74: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1afe74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe78: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1afe78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x1afe7c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1afe7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe80: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x1afe80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1afe84: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1afe84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe88: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1afe88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x1afe8c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x1afe8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe90: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1afe90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1afe94: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1afe94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe98: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x1afe98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1afe9c: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x1afe9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afea0: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1afea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x1afea4: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1afea4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1afea8: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1AFEA8u;
    SET_GPR_U32(ctx, 31, 0x1AFEB0u);
    ctx->pc = 0x1AFEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFEA8u;
    // 0x1afeac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1AFEA8u, 0x1AFEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFEB0u;
}
