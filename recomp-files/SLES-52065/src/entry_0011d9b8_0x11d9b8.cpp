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

// Function: entry_0011d9b8
// Address: 0x11d9b8 - 0x11da2c
void entry_0011d9b8_0x11d9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d9b8_0x11d9b8");
#endif

    switch (ctx->pc) {
        case 0x11d9ccu: goto label_11d9cc;
        case 0x11d9fcu: goto label_11d9fc;
        default: break;
    }

    ctx->pc = 0x11d9b8u;

    // 0x11d9b8: 0x8e62052c  lw          $v0, 0x52C($s3)
    ctx->pc = 0x11d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1324)));
    // 0x11d9bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d9c0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x11d9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x11d9c4: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11D9C4u;
    SET_GPR_U32(ctx, 31, 0x11D9CCu);
    ctx->pc = 0x11D9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D9C4u;
    // 0x11d9c8: 0x542821  addu        $a1, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11D9C4u, 0x11D9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D9CCu;
label_11d9cc:
    // 0x11d9cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11d9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d9d0: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x11D9D0u;
    {
        const bool branch_taken_0x11d9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11d9d0) {
            ctx->pc = 0x11DA50u;
            return;
        }
    }
    ctx->pc = 0x11D9D8u;
    // 0x11d9d8: 0x8e63052c  lw          $v1, 0x52C($s3)
    ctx->pc = 0x11d9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1324)));
    // 0x11d9dc: 0x15a180  sll         $s4, $s5, 6
    ctx->pc = 0x11d9dcu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x11d9e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11d9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d9e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d9e8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x11d9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11d9ec: 0x2831021  addu        $v0, $s4, $v1
    ctx->pc = 0x11d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x11d9f0: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x11d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x11d9f4: 0xc047798  jal         func_11DE60
    ctx->pc = 0x11D9F4u;
    SET_GPR_U32(ctx, 31, 0x11D9FCu);
    ctx->pc = 0x11D9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D9F4u;
    // 0x11d9f8: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DE60u, 0x11D9F4u, 0x11D9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D9FCu;
label_11d9fc:
    // 0x11d9fc: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x11d9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x11da00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11da00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11da04: 0x8e62052c  lw          $v0, 0x52C($s3)
    ctx->pc = 0x11da04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1324)));
    // 0x11da08: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x11da08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x11da0c: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x11da0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x11da10: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x11da10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x11da14: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x11da14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11da18: 0x244307ff  addiu       $v1, $v0, 0x7FF
    ctx->pc = 0x11da18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x11da1c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11DA1Cu;
    {
        const bool branch_taken_0x11da1c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA1Cu;
        // 0x11da20: 0x312c3  sra         $v0, $v1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da1c) {
            ctx->pc = 0x11DA2Cu;
            return;
        }
    }
    ctx->pc = 0x11DA24u;
    // 0x11da24: 0x246207ff  addiu       $v0, $v1, 0x7FF
    ctx->pc = 0x11da24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x11da28: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x11da28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    ctx->pc = 0x11da2cu;
}
