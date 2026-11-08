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

// Function: FUN_001d8138
// Address: 0x1d8138 - 0x1d81e4
void FUN_001d8138_0x1d8138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d8138_0x1d8138");
#endif

    ctx->pc = 0x1d8138u;

    // 0x1d8138: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d8138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d813c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d813cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8140: 0x8c43054c  lw          $v1, 0x54C($v0)
    ctx->pc = 0x1d8140u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x37054Cu));
    // 0x1d8144: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x1d8144u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1d8148: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1d8148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d814c: 0x2ca40004  sltiu       $a0, $a1, 0x4
    ctx->pc = 0x1d814cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1d8150: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8150u;
    {
        const bool branch_taken_0x1d8150 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8150u;
        // 0x1d8154: 0x3046000f  andi        $a2, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8150) {
            ctx->pc = 0x1D8168u;
            goto label_1d8168;
        }
    }
    ctx->pc = 0x1D8158u;
    // 0x1d8158: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d8158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d815c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1d815cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1d8160: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1D8160u;
    {
        const bool branch_taken_0x1d8160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8160u;
        // 0x1d8164: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8160) {
            ctx->pc = 0x1D81A4u;
            goto label_1d81a4;
        }
    }
    ctx->pc = 0x1D8168u;
label_1d8168:
    // 0x1d8168: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d8168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d816c: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D816Cu;
    {
        const bool branch_taken_0x1d816c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d816c) {
            ctx->pc = 0x1D8170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D816Cu;
            // 0x1d8170: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8188u;
            goto label_1d8188;
        }
    }
    ctx->pc = 0x1D8174u;
    // 0x1d8174: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8178: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d8178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d817c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D817Cu;
    {
        const bool branch_taken_0x1d817c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D817Cu;
        // 0x1d8180: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d817c) {
            ctx->pc = 0x1D81A0u;
            goto label_1d81a0;
        }
    }
    ctx->pc = 0x1D8184u;
    // 0x1d8184: 0x0  nop
    ctx->pc = 0x1d8184u;
    // NOP
label_1d8188:
    // 0x1d8188: 0x54a30005  bnel        $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8188u;
    {
        const bool branch_taken_0x1d8188 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d8188) {
            ctx->pc = 0x1D818Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8188u;
            // 0x1d818c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D81A0u;
            goto label_1d81a0;
        }
    }
    ctx->pc = 0x1D8190u;
    // 0x1d8190: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d8190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d8194: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1d8194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1d8198: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8198u;
    {
        const bool branch_taken_0x1d8198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8198u;
        // 0x1d819c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8198) {
            ctx->pc = 0x1D81A4u;
            goto label_1d81a4;
        }
    }
    ctx->pc = 0x1D81A0u;
label_1d81a0:
    // 0x1d81a0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1d81a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_1d81a4:
    // 0x1d81a4: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1d81a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1d81a8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d81a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d81ac: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d81acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d81b0: 0x8c830550  lw          $v1, 0x550($a0)
    ctx->pc = 0x1d81b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
    // 0x1d81b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d81b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d81b8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1d81b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d81bc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1d81bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d81c0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1d81c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1d81c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d81c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d81c8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1d81c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d81cc: 0xac8502e0  sw          $a1, 0x2E0($a0)
    ctx->pc = 0x1d81ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 736), GPR_U32(ctx, 5));
    // 0x1d81d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d81d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d81d4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1d81d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1d81d8: 0xac4302e4  sw          $v1, 0x2E4($v0)
    ctx->pc = 0x1d81d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 740), GPR_U32(ctx, 3));
    // 0x1d81dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D81DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D81E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D81DCu;
        // 0x1d81e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D81DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D81E4u;
}
