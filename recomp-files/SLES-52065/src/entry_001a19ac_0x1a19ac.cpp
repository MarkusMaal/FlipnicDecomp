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

// Function: entry_001a19ac
// Address: 0x1a19ac - 0x1a1a10
void entry_001a19ac_0x1a19ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a19ac_0x1a19ac");
#endif

    switch (ctx->pc) {
        case 0x1a1a08u: goto label_1a1a08;
        default: break;
    }

    ctx->pc = 0x1a19acu;

    // 0x1a19ac: 0x8e830688  lw          $v1, 0x688($s4)
    ctx->pc = 0x1a19acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
    // 0x1a19b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a19b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a19b4: 0xae830688  sw          $v1, 0x688($s4)
    ctx->pc = 0x1a19b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1672), GPR_U32(ctx, 3));
    // 0x1a19b8: 0x8e830688  lw          $v1, 0x688($s4)
    ctx->pc = 0x1a19b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
    // 0x1a19bc: 0x1c600091  bgtz        $v1, . + 4 + (0x91 << 2)
    ctx->pc = 0x1A19BCu;
    {
        const bool branch_taken_0x1a19bc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1a19bc) {
            ctx->pc = 0x1A1C04u;
            return;
        }
    }
    ctx->pc = 0x1A19C4u;
    // 0x1a19c4: 0x8e8309d4  lw          $v1, 0x9D4($s4)
    ctx->pc = 0x1a19c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2516)));
    // 0x1a19c8: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1a19c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1a19cc: 0x24422ac0  addiu       $v0, $v0, 0x2AC0
    ctx->pc = 0x1a19ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10944));
    // 0x1a19d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a19d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a19d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a19d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a19d8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1a19d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a19dc: 0x8e860678  lw          $a2, 0x678($s4)
    ctx->pc = 0x1a19dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
    // 0x1a19e0: 0xde8306b8  ld          $v1, 0x6B8($s4)
    ctx->pc = 0x1a19e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 1720)));
    // 0x1a19e4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1a19e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1a19e8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1a19e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a19ec: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x1a19ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a19f0: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x1a19f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1a19f4: 0xfe8206b8  sd          $v0, 0x6B8($s4)
    ctx->pc = 0x1a19f4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 1720), GPR_U64(ctx, 2));
    // 0x1a19f8: 0x8e820678  lw          $v0, 0x678($s4)
    ctx->pc = 0x1a19f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
    // 0x1a19fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a19fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a1a00: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1A1A00u;
    SET_GPR_U32(ctx, 31, 0x1A1A08u);
    ctx->pc = 0x1A1A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A00u;
    // 0x1a1a04: 0xae820678  sw          $v0, 0x678($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1656), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A1A00u, 0x1A1A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A08u;
label_1a1a08:
    // 0x1a1a08: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1A1A08u;
    {
        const bool branch_taken_0x1a1a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a08) {
            ctx->pc = 0x1A1C04u;
            return;
        }
    }
    ctx->pc = 0x1A1A10u;
}
