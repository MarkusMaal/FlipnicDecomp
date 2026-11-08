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

// Function: entry_0011ca08
// Address: 0x11ca08 - 0x11ca58
void entry_0011ca08_0x11ca08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ca08_0x11ca08");
#endif

    switch (ctx->pc) {
        case 0x11ca10u: goto label_11ca10;
        case 0x11ca1cu: goto label_11ca1c;
        case 0x11ca34u: goto label_11ca34;
        default: break;
    }

    ctx->pc = 0x11ca08u;

    // 0x11ca08: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x11CA08u;
    SET_GPR_U32(ctx, 31, 0x11CA10u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x11CA08u, 0x11CA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA10u;
label_11ca10:
    // 0x11ca10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11ca10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca14: 0xc046f94  jal         func_11BE50
    ctx->pc = 0x11CA14u;
    SET_GPR_U32(ctx, 31, 0x11CA1Cu);
    ctx->pc = 0x11CA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA14u;
    // 0x11ca18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BE50u, 0x11CA14u, 0x11CA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA1Cu;
label_11ca1c:
    // 0x11ca1c: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x11ca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x11ca20: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11ca20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11ca24: 0x3405c000  ori         $a1, $zero, 0xC000
    ctx->pc = 0x11ca24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x11ca28: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x11ca28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11ca2c: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11CA2Cu;
    SET_GPR_U32(ctx, 31, 0x11CA34u);
    ctx->pc = 0x11CA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA2Cu;
    // 0x11ca30: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11CA2Cu, 0x11CA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA34u;
label_11ca34:
    // 0x11ca34: 0xae2200cc  sw          $v0, 0xCC($s1)
    ctx->pc = 0x11ca34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 2));
    // 0x11ca38: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x11ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x11ca3c: 0x8e2600cc  lw          $a2, 0xCC($s1)
    ctx->pc = 0x11ca3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x11ca40: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x11ca40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11ca44: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x11ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x11ca48: 0x433824  and         $a3, $v0, $v1
    ctx->pc = 0x11ca48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11ca4c: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x11CA4Cu;
    {
        const bool branch_taken_0x11ca4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA4Cu;
        // 0x11ca50: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca4c) {
            ctx->pc = 0x11CAC8u;
            return;
        }
    }
    ctx->pc = 0x11CA54u;
    // 0x11ca54: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x11ca54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    ctx->pc = 0x11ca58u;
}
