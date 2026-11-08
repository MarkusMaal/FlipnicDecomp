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

// Function: entry_001a892c
// Address: 0x1a892c - 0x1a8a2c
void entry_001a892c_0x1a892c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a892c_0x1a892c");
#endif

    switch (ctx->pc) {
        case 0x1a89c4u: goto label_1a89c4;
        default: break;
    }

    ctx->pc = 0x1a892cu;

    // 0x1a892c: 0x0  nop
    ctx->pc = 0x1a892cu;
    // NOP
    // 0x1a8930: 0x8e8409b0  lw          $a0, 0x9B0($s4)
    ctx->pc = 0x1a8930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
    // 0x1a8934: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a8934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8938: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a8938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a893c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a893cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a8940: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a8944: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a8948: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a8948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a894c: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x1a894cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1a8950: 0x8c9306d4  lw          $s3, 0x6D4($a0)
    ctx->pc = 0x1a8950u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1748)));
    // 0x1a8954: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x1a8954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1a8958: 0x139100  sll         $s2, $s3, 4
    ctx->pc = 0x1a8958u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1a895c: 0xac8306d4  sw          $v1, 0x6D4($a0)
    ctx->pc = 0x1a895cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1748), GPR_U32(ctx, 3));
    // 0x1a8960: 0x8e8409b0  lw          $a0, 0x9B0($s4)
    ctx->pc = 0x1a8960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
    // 0x1a8964: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a8964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a8968: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a896c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a896cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a8970: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a8974: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a8974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a8978: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1a8978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1a897c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1a897cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1a8980: 0xac6206b0  sw          $v0, 0x6B0($v1)
    ctx->pc = 0x1a8980u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1712), GPR_U32(ctx, 2));
    // 0x1a8984: 0xac6006b8  sw          $zero, 0x6B8($v1)
    ctx->pc = 0x1a8984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1720), GPR_U32(ctx, 0));
    // 0x1a8988: 0x8e8409b0  lw          $a0, 0x9B0($s4)
    ctx->pc = 0x1a8988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
    // 0x1a898c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a898cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a8990: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a8990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a8994: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a8998: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a899c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a899cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a89a0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a89a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a89a4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1a89a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1a89a8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1a89a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1a89ac: 0x8c6306b0  lw          $v1, 0x6B0($v1)
    ctx->pc = 0x1a89acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1712)));
    // 0x1a89b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a89b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a89b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a89b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a89b8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a89b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1a89bc: 0xc042570  jal         func_1095C0
    ctx->pc = 0x1A89BCu;
    SET_GPR_U32(ctx, 31, 0x1A89C4u);
    ctx->pc = 0x1A89C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A89BCu;
    // 0x1a89c0: 0x64160001  daddiu      $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1A89BCu, 0x1A89C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A89C4u;
label_1a89c4:
    // 0x1a89c4: 0x8e8409b0  lw          $a0, 0x9B0($s4)
    ctx->pc = 0x1a89c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
    // 0x1a89c8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a89c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a89cc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a89ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a89d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a89d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a89d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a89d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a89d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a89d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a89dc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a89dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a89e0: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1a89e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1a89e4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1a89e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1a89e8: 0x8c6306b0  lw          $v1, 0x6B0($v1)
    ctx->pc = 0x1a89e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1712)));
    // 0x1a89ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a89ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a89f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a89f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a89f4: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1a89f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1a89f8: 0xa04001d3  sb          $zero, 0x1D3($v0)
    ctx->pc = 0x1a89f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 467), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a89fc: 0x8e8309b0  lw          $v1, 0x9B0($s4)
    ctx->pc = 0x1a89fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
    // 0x1a8a00: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a8a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a8a04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a8a08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a8a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a8a0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a8a10: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8a14: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1a8a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1a8a18: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1a8a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a8a1c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8A1Cu;
    {
        const bool branch_taken_0x1a8a1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A1Cu;
        // 0x1a8a20: 0x245506b0  addiu       $s5, $v0, 0x6B0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a1c) {
            ctx->pc = 0x1A8A2Cu;
            return;
        }
    }
    ctx->pc = 0x1A8A24u;
    // 0x1a8a24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8A24u;
    {
        const bool branch_taken_0x1a8a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A24u;
        // 0x1a8a28: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a24) {
            ctx->pc = 0x1A8A30u;
            return;
        }
    }
    ctx->pc = 0x1A8A2Cu;
}
