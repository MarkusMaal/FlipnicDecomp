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

// Function: entry_002004b8
// Address: 0x2004b8 - 0x2004f8
void entry_002004b8_0x2004b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002004b8_0x2004b8");
#endif

    switch (ctx->pc) {
        case 0x2004c4u: goto label_2004c4;
        default: break;
    }

    ctx->pc = 0x2004b8u;

    // 0x2004b8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2004b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2004bc: 0xc07fea0  jal         func_1FFA80
    ctx->pc = 0x2004BCu;
    SET_GPR_U32(ctx, 31, 0x2004C4u);
    ctx->pc = 0x2004C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2004BCu;
    // 0x2004c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA80u, 0x2004BCu, 0x2004C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2004C4u;
label_2004c4:
    // 0x2004c4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x2004c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2004c8: 0x26280014  addiu       $t0, $s1, 0x14
    ctx->pc = 0x2004c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x2004cc: 0xad70000c  sw          $s0, 0xC($t3)
    ctx->pc = 0x2004ccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 16));
    // 0x2004d0: 0x26490014  addiu       $t1, $s2, 0x14
    ctx->pc = 0x2004d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x2004d4: 0x25670014  addiu       $a3, $t3, 0x14
    ctx->pc = 0x2004d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
    // 0x2004d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2004d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2004dc: 0x8e2c0010  lw          $t4, 0x10($s1)
    ctx->pc = 0x2004dcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2004e0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2004e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2004e4: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x2004e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x2004e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2004e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2004ec: 0x1036821  addu        $t5, $t0, $v1
    ctx->pc = 0x2004ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2004f0: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x2004f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2004f4: 0x0  nop
    ctx->pc = 0x2004f4u;
    // NOP
    ctx->pc = 0x2004f8u;
}
