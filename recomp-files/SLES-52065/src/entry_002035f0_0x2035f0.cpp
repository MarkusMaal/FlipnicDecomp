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

// Function: entry_002035f0
// Address: 0x2035f0 - 0x203624
void entry_002035f0_0x2035f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002035f0_0x2035f0");
#endif

    ctx->pc = 0x2035f0u;

    // 0x2035f0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2035f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2035f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2035f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035f8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2035f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2035fc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2035fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x203600: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x203600u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x203604: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x203604u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x203608: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x203608u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20360c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x20360cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x203610: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x203610u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203614: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x203614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203618: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x203618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20361c: 0x3e00008  jr          $ra
    ctx->pc = 0x20361Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20361Cu;
        // 0x203620: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20361Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203624u;
}
