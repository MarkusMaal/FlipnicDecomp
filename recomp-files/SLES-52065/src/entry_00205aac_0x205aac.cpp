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

// Function: entry_00205aac
// Address: 0x205aac - 0x205af0
void entry_00205aac_0x205aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205aac_0x205aac");
#endif

    switch (ctx->pc) {
        case 0x205ac8u: goto label_205ac8;
        default: break;
    }

    ctx->pc = 0x205aacu;

label_205aac:
    // 0x205aac: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_205ab0:
    if (ctx->pc == 0x205AB0u) {
        ctx->pc = 0x205AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AACu;
        // 0x205ab0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205AB4u;
        goto label_205ab4;
    }
    ctx->pc = 0x205AACu;
    {
        const bool branch_taken_0x205aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AACu;
        // 0x205ab0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205aac) {
            ctx->pc = 0x205B38u;
            return;
        }
    }
    ctx->pc = 0x205AB4u;
label_205ab4:
    // 0x205ab4: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x205ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_205ab8:
    // 0x205ab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x205ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205abc:
    // 0x205abc: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x205abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_205ac0:
    // 0x205ac0: 0x60f809  jalr        $v1
label_205ac4:
    if (ctx->pc == 0x205AC4u) {
        ctx->pc = 0x205AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AC0u;
        // 0x205ac4: 0x8fa60260  lw          $a2, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205AC8u;
        goto label_205ac8;
    }
    ctx->pc = 0x205AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x205AC8u);
        ctx->pc = 0x205AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AC0u;
        // 0x205ac4: 0x8fa60260  lw          $a2, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205AC0u, 0x205AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205AC8u;
label_205ac8:
    // 0x205ac8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x205ac8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205acc:
    // 0x205acc: 0x32620010  andi        $v0, $s3, 0x10
    ctx->pc = 0x205accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
label_205ad0:
    // 0x205ad0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_205ad4:
    if (ctx->pc == 0x205AD4u) {
        ctx->pc = 0x205AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AD0u;
        // 0x205ad4: 0x32620004  andi        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x205AD8u;
        goto label_205ad8;
    }
    ctx->pc = 0x205AD0u;
    {
        const bool branch_taken_0x205ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AD0u;
        // 0x205ad4: 0x32620004  andi        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ad0) {
            ctx->pc = 0x205AF0u;
            return;
        }
    }
    ctx->pc = 0x205AD8u;
label_205ad8:
    // 0x205ad8: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x205ad8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_205adc:
    // 0x205adc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x205adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_205ae0:
    // 0x205ae0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x205ae0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_205ae4:
    // 0x205ae4: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x205ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_205ae8:
    // 0x205ae8: 0x10000011  b           . + 4 + (0x11 << 2)
label_205aec:
    if (ctx->pc == 0x205AECu) {
        ctx->pc = 0x205AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AE8u;
        // 0x205aec: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205AF0u;
        goto label_fallthrough_0x205ae8;
    }
    ctx->pc = 0x205AE8u;
    {
        const bool branch_taken_0x205ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AE8u;
        // 0x205aec: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ae8) {
            ctx->pc = 0x205B30u;
            return;
        }
    }
label_fallthrough_0x205ae8:
    ctx->pc = 0x205AF0u;
}
