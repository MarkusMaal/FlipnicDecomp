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

// Function: entry_001d9ae4
// Address: 0x1d9ae4 - 0x1d9b20
void entry_001d9ae4_0x1d9ae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9ae4_0x1d9ae4");
#endif

    switch (ctx->pc) {
        case 0x1d9afcu: goto label_1d9afc;
        default: break;
    }

    ctx->pc = 0x1d9ae4u;

label_1d9ae4:
    // 0x1d9ae4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1d9ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_1d9ae8:
    // 0x1d9ae8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d9ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d9aec:
    // 0x1d9aec: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1d9aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1d9af0:
    // 0x1d9af0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d9af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9af4:
    // 0x1d9af4: 0x60f809  jalr        $v1
label_1d9af8:
    if (ctx->pc == 0x1D9AF8u) {
        ctx->pc = 0x1D9AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9AF4u;
        // 0x1d9af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9AFCu;
        goto label_1d9afc;
    }
    ctx->pc = 0x1D9AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D9AFCu);
        ctx->pc = 0x1D9AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9AF4u;
        // 0x1d9af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9AF4u, 0x1D9AFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9AFCu;
label_1d9afc:
    // 0x1d9afc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d9afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d9b00:
    // 0x1d9b00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d9b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9b04:
    // 0x1d9b04: 0x10820027  beq         $a0, $v0, . + 4 + (0x27 << 2)
label_1d9b08:
    if (ctx->pc == 0x1D9B08u) {
        ctx->pc = 0x1D9B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B04u;
        // 0x1d9b08: 0x8e8571d0  lw          $a1, 0x71D0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9B0Cu;
        goto label_1d9b0c;
    }
    ctx->pc = 0x1D9B04u;
    {
        const bool branch_taken_0x1d9b04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D9B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B04u;
        // 0x1d9b08: 0x8e8571d0  lw          $a1, 0x71D0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9b04) {
            ctx->pc = 0x1D9BA4u;
            return;
        }
    }
    ctx->pc = 0x1D9B0Cu;
label_1d9b0c:
    // 0x1d9b0c: 0x92020044  lbu         $v0, 0x44($s0)
    ctx->pc = 0x1d9b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
label_1d9b10:
    // 0x1d9b10: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_1d9b14:
    if (ctx->pc == 0x1D9B14u) {
        ctx->pc = 0x1D9B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B10u;
        // 0x1d9b14: 0xa2000044  sb          $zero, 0x44($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9B18u;
        goto label_1d9b18;
    }
    ctx->pc = 0x1D9B10u;
    {
        const bool branch_taken_0x1d9b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9b10) {
            ctx->pc = 0x1D9B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9B10u;
            // 0x1d9b14: 0xa2000044  sb          $zero, 0x44($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9B8Cu;
            return;
        }
    }
    ctx->pc = 0x1D9B18u;
label_1d9b18:
    // 0x1d9b18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d9b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9b1c:
    // 0x1d9b1c: 0x26070040  addiu       $a3, $s0, 0x40
    ctx->pc = 0x1d9b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x1d9b20u;
}
