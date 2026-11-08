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

// Function: entry_001ae9dc
// Address: 0x1ae9dc - 0x1aea30
void entry_001ae9dc_0x1ae9dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae9dc_0x1ae9dc");
#endif

    switch (ctx->pc) {
        case 0x1aea0cu: goto label_1aea0c;
        case 0x1aea1cu: goto label_1aea1c;
        case 0x1aea28u: goto label_1aea28;
        default: break;
    }

    ctx->pc = 0x1ae9dcu;

    // 0x1ae9dc: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1ae9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae9e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ae9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ae9e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae9e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae9e8: 0x0  nop
    ctx->pc = 0x1ae9e8u;
    // NOP
    // 0x1ae9ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ae9ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ae9f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ae9f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ae9f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ae9f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ae9f8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ae9f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1ae9fc: 0x0  nop
    ctx->pc = 0x1ae9fcu;
    // NOP
    // 0x1aea00: 0xae8206c0  sw          $v0, 0x6C0($s4)
    ctx->pc = 0x1aea00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1728), GPR_U32(ctx, 2));
    // 0x1aea04: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1AEA04u;
    SET_GPR_U32(ctx, 31, 0x1AEA0Cu);
    ctx->pc = 0x1AEA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA04u;
    // 0x1aea08: 0xa28006b8  sb          $zero, 0x6B8($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 1720), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AEA04u, 0x1AEA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA0Cu;
label_1aea0c:
    // 0x1aea0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1aea0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aea10: 0x240500b8  addiu       $a1, $zero, 0xB8
    ctx->pc = 0x1aea10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x1aea14: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1AEA14u;
    SET_GPR_U32(ctx, 31, 0x1AEA1Cu);
    ctx->pc = 0x1AEA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA14u;
    // 0x1aea18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AEA14u, 0x1AEA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA1Cu;
label_1aea1c:
    // 0x1aea1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1aea1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aea20: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1AEA20u;
    SET_GPR_U32(ctx, 31, 0x1AEA28u);
    ctx->pc = 0x1AEA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA20u;
    // 0x1aea24: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AEA20u, 0x1AEA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA28u;
label_1aea28:
    // 0x1aea28: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x1AEA28u;
    {
        const bool branch_taken_0x1aea28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aea28) {
            ctx->pc = 0x1AEDB8u;
            return;
        }
    }
    ctx->pc = 0x1AEA30u;
}
