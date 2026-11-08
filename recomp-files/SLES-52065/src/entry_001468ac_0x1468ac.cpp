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

// Function: entry_001468ac
// Address: 0x1468ac - 0x1468dc
void entry_001468ac_0x1468ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001468ac_0x1468ac");
#endif

    switch (ctx->pc) {
        case 0x1468b8u: goto label_1468b8;
        default: break;
    }

    ctx->pc = 0x1468acu;

    // 0x1468ac: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1468acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1468b0: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1468B0u;
    SET_GPR_U32(ctx, 31, 0x1468B8u);
    ctx->pc = 0x1468B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1468B0u;
    // 0x1468b4: 0x34443880  ori         $a0, $v0, 0x3880 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14464);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1468B0u, 0x1468B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1468B8u;
label_1468b8:
    // 0x1468b8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1468b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1468bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1468bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1468c0: 0x2839821  addu        $s3, $s4, $v1
    ctx->pc = 0x1468c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1468c4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1468c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1468c8: 0xae620034  sw          $v0, 0x34($s3)
    ctx->pc = 0x1468c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
    // 0x1468cc: 0x26720034  addiu       $s2, $s3, 0x34
    ctx->pc = 0x1468ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
    // 0x1468d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1468d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1468d4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1468d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1468d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1468d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x1468dcu;
}
