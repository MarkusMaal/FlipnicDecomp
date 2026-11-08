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

// Function: entry_001d3bb8
// Address: 0x1d3bb8 - 0x1d3c2c
void entry_001d3bb8_0x1d3bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3bb8_0x1d3bb8");
#endif

    switch (ctx->pc) {
        case 0x1d3c10u: goto label_1d3c10;
        case 0x1d3c20u: goto label_1d3c20;
        default: break;
    }

    ctx->pc = 0x1d3bb8u;

    // 0x1d3bb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3bbc: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1d3bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1d3bc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3bc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3bc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d3bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d3bcc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d3bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3bd0: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D3BD0u;
    {
        const bool branch_taken_0x1d3bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3BD0u;
        // 0x1d3bd4: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3bd0) {
            ctx->pc = 0x1D3C2Cu;
            return;
        }
    }
    ctx->pc = 0x1D3BD8u;
    // 0x1d3bd8: 0x3c035453  lui         $v1, 0x5453
    ctx->pc = 0x1d3bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21587 << 16));
    // 0x1d3bdc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1d3bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d3be0: 0x34635845  ori         $v1, $v1, 0x5845
    ctx->pc = 0x1d3be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22597);
    // 0x1d3be4: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D3BE4u;
    {
        const bool branch_taken_0x1d3be4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D3BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3BE4u;
        // 0x1d3be8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3be4) {
            ctx->pc = 0x1D3C2Cu;
            return;
        }
    }
    ctx->pc = 0x1D3BECu;
    // 0x1d3bec: 0xae0002d4  sw          $zero, 0x2D4($s0)
    ctx->pc = 0x1d3becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 0));
    // 0x1d3bf0: 0x260400a8  addiu       $a0, $s0, 0xA8
    ctx->pc = 0x1d3bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
    // 0x1d3bf4: 0xae000248  sw          $zero, 0x248($s0)
    ctx->pc = 0x1d3bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 0));
    // 0x1d3bf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3bfc: 0xfe0000a0  sd          $zero, 0xA0($s0)
    ctx->pc = 0x1d3bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 160), GPR_U64(ctx, 0));
    // 0x1d3c00: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x1d3c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1d3c04: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x1d3c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    // 0x1d3c08: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x1D3C08u;
    SET_GPR_U32(ctx, 31, 0x1D3C10u);
    ctx->pc = 0x1D3C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C08u;
    // 0x1d3c0c: 0xae00022c  sw          $zero, 0x22C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x1D3C08u, 0x1D3C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C10u;
label_1d3c10:
    // 0x1d3c10: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1d3c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d3c14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c18: 0xc074e48  jal         func_1D3920
    ctx->pc = 0x1D3C18u;
    SET_GPR_U32(ctx, 31, 0x1D3C20u);
    ctx->pc = 0x1D3C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C18u;
    // 0x1d3c1c: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3920u, 0x1D3C18u, 0x1D3C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C20u;
label_1d3c20:
    // 0x1d3c20: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1d3c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1d3c24: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1d3c24u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1d3c28: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1d3c28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d3c2cu;
}
