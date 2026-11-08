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

// Function: entry_00149b0c
// Address: 0x149b0c - 0x149ba4
void entry_00149b0c_0x149b0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149b0c_0x149b0c");
#endif

    switch (ctx->pc) {
        case 0x149b18u: goto label_149b18;
        case 0x149b78u: goto label_149b78;
        default: break;
    }

    ctx->pc = 0x149b0cu;

    // 0x149b0c: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x149b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x149b10: 0xc052340  jal         func_148D00
    ctx->pc = 0x149B10u;
    SET_GPR_U32(ctx, 31, 0x149B18u);
    ctx->pc = 0x149B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149B10u;
    // 0x149b14: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148D00u, 0x149B10u, 0x149B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149B18u;
label_149b18:
    // 0x149b18: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x149b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x149b1c: 0x8fa50220  lw          $a1, 0x220($sp)
    ctx->pc = 0x149b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x149b20: 0x8fa40224  lw          $a0, 0x224($sp)
    ctx->pc = 0x149b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
    // 0x149b24: 0x8fa3022c  lw          $v1, 0x22C($sp)
    ctx->pc = 0x149b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x149b28: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x149b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x149b2c: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x149b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x149b30: 0x27a200dc  addiu       $v0, $sp, 0xDC
    ctx->pc = 0x149b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x149b34: 0xafa400d4  sw          $a0, 0xD4($sp)
    ctx->pc = 0x149b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 4));
    // 0x149b38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149b38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x149b3c: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x149b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x149b40: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x149b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x149b44: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149b44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x149b48: 0x8fa30234  lw          $v1, 0x234($sp)
    ctx->pc = 0x149b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x149b4c: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x149b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x149b50: 0x16000036  bnez        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x149B50u;
    {
        const bool branch_taken_0x149b50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x149B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149B50u;
        // 0x149b54: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b50) {
            ctx->pc = 0x149C2Cu;
            return;
        }
    }
    ctx->pc = 0x149B58u;
    // 0x149b58: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x149b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x149b5c: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x149b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    // 0x149b60: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x149b60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149b64: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x149b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x149b68: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x149b68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x149b6c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x149b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x149b70: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x149B70u;
    SET_GPR_U32(ctx, 31, 0x149B78u);
    ctx->pc = 0x149B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149B70u;
    // 0x149b74: 0xfca20010  sd          $v0, 0x10($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x149B70u, 0x149B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149B78u;
label_149b78:
    // 0x149b78: 0x27b2042c  addiu       $s2, $sp, 0x42C
    ctx->pc = 0x149b78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1068));
    // 0x149b7c: 0x27b60430  addiu       $s6, $sp, 0x430
    ctx->pc = 0x149b7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
    // 0x149b80: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x149b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x149b84: 0x27b70434  addiu       $s7, $sp, 0x434
    ctx->pc = 0x149b84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 1076));
    // 0x149b88: 0x2690ffff  addiu       $s0, $s4, -0x1
    ctx->pc = 0x149b88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x149b8c: 0xafa3040c  sw          $v1, 0x40C($sp)
    ctx->pc = 0x149b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1036), GPR_U32(ctx, 3));
    // 0x149b90: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x149b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x149b94: 0xafa30410  sw          $v1, 0x410($sp)
    ctx->pc = 0x149b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1040), GPR_U32(ctx, 3));
    // 0x149b98: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x149b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x149b9c: 0x128001d3  beqz        $s4, . + 4 + (0x1D3 << 2)
    ctx->pc = 0x149B9Cu;
    {
        const bool branch_taken_0x149b9c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x149BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149B9Cu;
        // 0x149ba0: 0xafa30414  sw          $v1, 0x414($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1044), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b9c) {
            ctx->pc = 0x14A2ECu;
            return;
        }
    }
    ctx->pc = 0x149BA4u;
}
