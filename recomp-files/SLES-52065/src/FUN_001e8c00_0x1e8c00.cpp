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

// Function: FUN_001e8c00
// Address: 0x1e8c00 - 0x1e8c80
void FUN_001e8c00_0x1e8c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e8c00_0x1e8c00");
#endif

    switch (ctx->pc) {
        case 0x1e8c3cu: goto label_1e8c3c;
        case 0x1e8c68u: goto label_1e8c68;
        default: break;
    }

    ctx->pc = 0x1e8c00u;

    // 0x1e8c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e8c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e8c04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e8c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e8c08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e8c0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e8c10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e8c10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8c14: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E8C14u;
    {
        const bool branch_taken_0x1e8c14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C14u;
        // 0x1e8c18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8c14) {
            ctx->pc = 0x1E8C68u;
            goto label_1e8c68;
        }
    }
    ctx->pc = 0x1E8C1Cu;
    // 0x1e8c1c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e8c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e8c20: 0x2442c330  addiu       $v0, $v0, -0x3CD0
    ctx->pc = 0x1e8c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951728));
    // 0x1e8c24: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e8c24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1e8c28: 0x92220014  lbu         $v0, 0x14($s1)
    ctx->pc = 0x1e8c28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e8c2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8C2Cu;
    {
        const bool branch_taken_0x1e8c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8c2c) {
            ctx->pc = 0x1E8C3Cu;
            goto label_1e8c3c;
        }
    }
    ctx->pc = 0x1E8C34u;
    // 0x1e8c34: 0xc04018c  jal         func_100630
    ctx->pc = 0x1E8C34u;
    SET_GPR_U32(ctx, 31, 0x1E8C3Cu);
    ctx->pc = 0x1E8C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8C34u;
    // 0x1e8c38: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1E8C34u, 0x1E8C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8C3Cu;
label_1e8c3c:
    // 0x1e8c3c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E8C3Cu;
    {
        const bool branch_taken_0x1e8c3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C3Cu;
        // 0x1e8c40: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8c3c) {
            ctx->pc = 0x1E8C54u;
            goto label_1e8c54;
        }
    }
    ctx->pc = 0x1E8C44u;
    // 0x1e8c44: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e8c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e8c48: 0x24428850  addiu       $v0, $v0, -0x77B0
    ctx->pc = 0x1e8c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936656));
    // 0x1e8c4c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e8c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1e8c50: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e8c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e8c54:
    // 0x1e8c54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e8c54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e8c58: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E8C58u;
    {
        const bool branch_taken_0x1e8c58 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E8C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C58u;
        // 0x1e8c5c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8c58) {
            ctx->pc = 0x1E8C6Cu;
            goto label_1e8c6c;
        }
    }
    ctx->pc = 0x1E8C60u;
    // 0x1e8c60: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E8C60u;
    SET_GPR_U32(ctx, 31, 0x1E8C68u);
    ctx->pc = 0x1E8C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8C60u;
    // 0x1e8c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E8C60u, 0x1E8C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8C68u;
label_1e8c68:
    // 0x1e8c68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e8c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e8c6c:
    // 0x1e8c6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e8c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8c70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e8c70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8c74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8c78: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C78u;
        // 0x1e8c7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8C80u;
}
