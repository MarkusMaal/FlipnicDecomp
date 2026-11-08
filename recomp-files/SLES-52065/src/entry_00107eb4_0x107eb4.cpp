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

// Function: entry_00107eb4
// Address: 0x107eb4 - 0x107ee0
void entry_00107eb4_0x107eb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107eb4_0x107eb4");
#endif

    switch (ctx->pc) {
        case 0x107ec0u: goto label_107ec0;
        case 0x107ed4u: goto label_107ed4;
        default: break;
    }

    ctx->pc = 0x107eb4u;

    // 0x107eb4: 0x0  nop
    ctx->pc = 0x107eb4u;
    // NOP
    // 0x107eb8: 0xc062d50  jal         func_18B540
    ctx->pc = 0x107EB8u;
    SET_GPR_U32(ctx, 31, 0x107EC0u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x107EB8u, 0x107EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107EC0u;
label_107ec0:
    // 0x107ec0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x107ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x107ec4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ec8: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x107ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x107ecc: 0xc062b7c  jal         func_18ADF0
    ctx->pc = 0x107ECCu;
    SET_GPR_U32(ctx, 31, 0x107ED4u);
    ctx->pc = 0x107ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107ECCu;
    // 0x107ed0: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ADF0u, 0x107ECCu, 0x107ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107ED4u;
label_107ed4:
    // 0x107ed4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x107ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x107ed8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x107ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x107edc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x107edcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x107ee0u;
}
