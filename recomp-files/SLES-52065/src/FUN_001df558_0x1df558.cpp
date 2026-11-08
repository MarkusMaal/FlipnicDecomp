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

// Function: FUN_001df558
// Address: 0x1df558 - 0x1df5c0
void FUN_001df558_0x1df558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001df558_0x1df558");
#endif

    switch (ctx->pc) {
        case 0x1df598u: goto label_1df598;
        case 0x1df5a0u: goto label_1df5a0;
        default: break;
    }

    ctx->pc = 0x1df558u;

    // 0x1df558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1df558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1df55c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1df55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1df560: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df564: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1df564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1df568: 0x1011c0  sll         $v0, $s0, 7
    ctx->pc = 0x1df568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x1df56c: 0x600000e  bltz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DF56Cu;
    {
        const bool branch_taken_0x1df56c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1DF570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF56Cu;
        // 0x1df570: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df56c) {
            ctx->pc = 0x1DF5A8u;
            goto label_1df5a8;
        }
    }
    ctx->pc = 0x1DF574u;
    // 0x1df574: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1df574u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x1df578: 0x26319f00  addiu       $s1, $s1, -0x6100
    ctx->pc = 0x1df578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942464));
    // 0x1df57c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1df57cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1df580: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1df580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1df584: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1df584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1df588: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DF588u;
    {
        const bool branch_taken_0x1df588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1df588) {
            ctx->pc = 0x1DF58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF588u;
            // 0x1df58c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF5ACu;
            goto label_1df5ac;
        }
    }
    ctx->pc = 0x1DF590u;
    // 0x1df590: 0xc077d8a  jal         func_1DF628
    ctx->pc = 0x1DF590u;
    SET_GPR_U32(ctx, 31, 0x1DF598u);
    ctx->pc = 0x1DF594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF590u;
    // 0x1df594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF628u, 0x1DF590u, 0x1DF598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF598u;
label_1df598:
    // 0x1df598: 0xc077daa  jal         func_1DF6A8
    ctx->pc = 0x1DF598u;
    SET_GPR_U32(ctx, 31, 0x1DF5A0u);
    ctx->pc = 0x1DF59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF598u;
    // 0x1df59c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF6A8u, 0x1DF598u, 0x1DF5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF5A0u;
label_1df5a0:
    // 0x1df5a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1df5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df5a4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1df5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1df5a8:
    // 0x1df5a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1df5a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1df5ac:
    // 0x1df5ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1df5acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df5b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1df5b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1df5b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1df5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF5B8u;
        // 0x1df5bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF5C0u;
}
